#ifndef _main_h
#define _main_h

#include <stdlib.h>
#include <stddef.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
void *malloc_checked(unsigned int b);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void errors(void);
int _strlen(char *s);
int is_digit(char *s);

#endif
