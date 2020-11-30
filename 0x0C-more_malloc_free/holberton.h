#ifndef HOLBERTON
#define HOLBERTON
#include <stdlib.h>
#include <stdio.h>
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
unsigned int getLength(char *s);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int checkForLetters(char **argv);
void displayError(void);
int _atoi(char *s);
unsigned int numberLength(unsigned int n);
char *numberToString(char *s, unsigned int n, int length);
void printString(char *str);
int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);
#endif /* HOLBERTON */
