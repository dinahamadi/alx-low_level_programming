#!/bin/bash
c_sources=$(find . -maxdepth 1 -type f -name "*.c")
gcc -c $c_sources
ar rcs liball.a *.o
