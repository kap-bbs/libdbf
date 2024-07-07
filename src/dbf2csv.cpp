extern "C" {
#include <libdbf/libdbf.h>
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iconv.h>

#include "text400.h"

int main(int argc, char *argv[]) {
	FILE *fp = argc < 3 ? stdout : fopen(argv[2], "wb");

	P_DBF *db = dbf_Open(argv[argc-1]);
	size_t len = dbf_RecordLength(db), out_size = 2*len, _len, _out_size;
	char *record = (char *)malloc(len+1), *output = (char *)malloc(2*len+1), *_record, *_output;
	int cols = dbf_NumCols(db);
	int *sizes = (int *)malloc(cols * sizeof(int)), *addr = (int *)malloc(cols * sizeof(int));
	char *types = (char *)malloc(cols);
	iconv_t cd = iconv_open("UTF-8", "CP437");
	int r;

	memset(record, 0, len+1);
	memset(output, 0, out_size+1);

	for (int t = 0; t < cols; t++) {
		sizes[t] = dbf_ColumnSize(db, t);
		addr[t] = dbf_ColumnAddress(db, t);
		types[t] = dbf_ColumnType(db, t);
		if (t) fputc('\t', fp);
		fprintf(fp, "%s", dbf_ColumnName(db, t));
	}
	fputc('\n', fp);

	for (int t = dbf_NumRows(db) - 1; t >= 0; t--) {
		dbf_ReadRecord(db, record, len);
		// fprintf(fp, "%s\n", record);

		for (int c = 0; c < cols; c++) {
			if (c) fputc('\t', fp);

			_len = sizes[c];
			_record = record + addr[c];

			if (types[c] == 'C') {
				_out_size = out_size;
				_output = output;
				iconv(cd, &_record, &_len, &_output, &_out_size);
				*_output = 0;
				fprintf(fp, "%s", decode_cp437(output).c_str());

			} else {
				memcpy(output, _record, _len);
				output[_len] = 0;
				if (types[c] == 'N') {
					long long v = strtoll(output, NULL, 10);
					fprintf(fp, "%lld", v);
				} else
					fprintf(fp, "%s", output);
			}
		}
		fputc('\n', fp);
	}

	if (fp != stdout)
		fclose(fp);

	free(addr);
	free(sizes);
	free(record);
	free(output);
	free(types);

	return 0;
}
