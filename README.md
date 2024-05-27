libdbf
======

This is a C library to read [DBF files](http://en.wikipedia.org/wiki/DBase). 
The code is originally from http://dbf.berlios.de/.
While the `dbf` code from that source compiles just fine, the underlying library doesn't.

This is a modified version of the library, that compiles.

### Compiling

```
./autogen.sh
./configure
make
```

Custom compile for BBS files:

```cmd
cd src
gcc -o dbf2csv -I.. -I../include dbf2csv.c dbf.c dbf_endian.c
```

### Installing
```
sudo make install
```
