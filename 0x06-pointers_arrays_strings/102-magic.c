#include <stdio.h>
/**
 * main - add a new line to the code
 *
 * Return: 0
 */
int main(void)
{
	int a[] = {98, 402, 198, 1024};
	int *p;

	p = &a[2];
	*(p + 1) = 98;
	printf("a[2] = %d\n", *p);
	/**
	 * added line to print a[2] = 98
	 */
	return (0);
}
