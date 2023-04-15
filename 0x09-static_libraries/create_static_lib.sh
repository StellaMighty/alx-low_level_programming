#!/bin/bash
gcc -c *.c
ar rcs liball.a *.o
ranlib liball.a
ar -t liball.a
nm liball.a
