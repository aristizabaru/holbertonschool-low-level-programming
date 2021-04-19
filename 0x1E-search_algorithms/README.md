# 0x1E. C - Search Algorithms

## About

This is an educational project to explore concepts search algorithms

## Topics

### General

-  What is a search algorithm
-  What is a linear search
-  What is a binary search
-  What is the best search algorithm to use depending on your needs

## Requirements

-  Ubuntu 16.04 LTS
-  gcc 4.8.4 using the flags `-Wall -Werror -Wextra` and `-pedantic`
-  [Betty](https://github.com/holbertonschool/Betty) style
-  PEP8 1.7.\*

## Resourses

### Read or watch

-  [Search algorithm](https://en.wikipedia.org/wiki/Search_algorithm)
-  [Space complexity (1)](https://www.geeksforgeeks.org/g-fact-86/)
-  [Linear search](https://www.youtube.com/watch?v=C46QfTjVCNU)
-  [Binary search](https://www.youtube.com/watch?v=V_T5NuccwRA)

## More info

You will be asked to write files containing big O notations. Please use this format:

-  `O(1)`
-  `O(n)`
-  `O(n!)`
-  n\*m -> `O(nm)`
-  n square -> `O(n^2)`
-  sqrt n -> `O(sqrt(n))`
-  log(n) -> `O(log(n))`
-  n \* log(n) -> `O(nlog(n))`

## File Descriptions

This project is conceived to be carried out step by step, that is why the description of the files is presented as a statement.

### 0. Linear search

**[0-linear.c](0-linear.c)**

Write a function that searches for a value in an array of integers using the [Linear search algorithm](https://en.wikipedia.org/wiki/Linear_search)

-  Prototype : `int linear_search(int \*array, size_t size, int value);`
-  Where `array` is a pointer to the first element of the array to search in
-  `size` is the number of elements in `array`
-  And `value` is the value to search for
-  Your function must return the first index where `value` is located
-  If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
-  Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)

```
wilfried@0x1E-search_algorithms$ cat 0-main.c
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));
    return (EXIT_SUCCESS);
}
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-linear.c -o 0-linear
wilfried@0x1E-search_algorithms$ ./0-linear
Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Found 3 at index: 3

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Found 42 at index: 2

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [42]
Value checked array[6] = [6]
Value checked array[7] = [7]
Value checked array[8] = [-1]
Value checked array[9] = [9]
Found 999 at index: -1
```

### 1. Binary search

**[1-binary.c](1-binary.c)**

Write a function that searches for a value in a sorted array of integers using the [Binary search algorithm](https://en.wikipedia.org/wiki/Binary_search_algorithm)

-  Prototype : `int binary_search(int *array, size_t size, int value);`
-  Where `array` is a pointer to the first element of the array to search in
-  `size` is the number of elements in `array`
-  And `value` is the value to search for
-  Your function must return the index where `value` is located
-  You can assume that `array` will be sorted in ascending order
-  You can assume that `value` won’t appear more than once in `array`
-  If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
-  You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray) (See example)

```
wilfried@0x1E-search_algorithms$ cat 1-main.c
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
    return (EXIT_SUCCESS);
}
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic 1-main.c 1-binary.c -o 1-binary
wilfried@0x1E-search_algorithms$ ./1-binary
Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 0, 1, 2, 3
Searching in array: 2, 3
Found 2 at index: 2

Searching in array: 0, 1, 2, 3, 4
Searching in array: 3, 4
Searching in array: 4
Found 5 at index: -1

Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 5, 6, 7, 8, 9
Searching in array: 8, 9
Searching in array: 9
Found 999 at index: -1
```
