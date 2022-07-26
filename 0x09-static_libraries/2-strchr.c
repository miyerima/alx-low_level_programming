#include "main.h"

/**
 * _strchr - locates character found in a string
 * @s: is the pointer to the char
 * @c: char parameter to be found
 * Return: *s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}

	return (0);
}
