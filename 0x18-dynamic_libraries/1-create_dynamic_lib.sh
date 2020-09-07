#!/bin/bash
gcc -c -fPIC -Wall -Wextra -Werror -pedantic *.c
gcc -shared -o *.o liball.so
