libdbf
======

This is a C library to read [DBF files](http://en.wikipedia.org/wiki/DBase). 
The code is originally from http://dbf.berlios.de/.
While the `dbf` code from that source compiles just fine, the underlying library doesn't.

This is a modified version of the library, that compiles.

### Compiling

```bash
./autogen.sh
./configure
make
```

Custom compile for BBS files:

```bash
cd src
gcc -c -o dbf.o -I.. -I../include dbf.c
gcc -c -o dbf_endian.o -I.. -I../include dbf_endian.c
g++ -o dbf2csv dbf2csv.cpp cp437_to_utf8.cpp dbf.o dbf_endian.o
```

### Usage

```bash
./dbf2csv FILE.DBF 2>/dev/null
# or
./dbf2csv -o FILE.CSV FILE.DBF
```

### Installing
```
sudo make install
```
