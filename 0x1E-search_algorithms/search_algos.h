#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
void print_diff(size_t a, size_t b);
int interpolation_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_bin(int *array, size_t low, size_t high);
int exponential_search(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value)
skiplist_t *linear_skip(skiplist_t *list, int value)


#endif
