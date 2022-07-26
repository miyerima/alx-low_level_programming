#include "main.h"

/**
 * _memcpy - copies n bytes of memmory to pointer of a pointer
 * @dest: pointer to char parameters
 * @src: pointer to char params
 * @n: size of memmory
 * Return: @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
