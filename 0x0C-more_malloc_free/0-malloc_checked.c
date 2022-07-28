#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memmory using malloc
 * @b: number of bytes to be allocated
 *
 * Return: a pointer to the allocated memmory
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
