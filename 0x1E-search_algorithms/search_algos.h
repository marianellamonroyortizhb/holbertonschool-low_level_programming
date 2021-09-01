#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void printf_array(int *array, int b_index, int l_index);
int jump_search(int *array, size_t size, int value);
#endif