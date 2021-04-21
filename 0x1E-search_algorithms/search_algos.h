#ifndef __SEARCH__H__
#define __SEARCH__H__

#include <stdio.h>
#include <math.h>

/* PROTOTYPES */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int binary_search_explonential(int *array, int left, int right, int value);
int advanced_binary(int *array, size_t size, int value);

#endif /* __SEARCH__H__ */
