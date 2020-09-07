#!/bin/bash
gcc -c -fPIC -Wall -Wextra -Werror -pedantic *.c
gcc -o -shared *.o liball.so
