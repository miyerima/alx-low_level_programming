#include <stdio.h>

/**
 * main -> main function
 * Return: 0 success
 */
int main(void)
{
	int n;
	int c[5];
	int *p;

	c[2] = 1024;
	p = &n;
	/**
	 * write your line of code here...
	 * Remember:
	 */
	p[5] = 98;
	/* ...so that this prints 98\n */
	printf("c[2] = %d\n", c[2]);
	return (0);
}
