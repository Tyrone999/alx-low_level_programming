#include "main.h"
#include <stdio.h>

/**
 * print_array - print the array
 * @a: array
 * @n: length
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
			break;
		}
		printf("%d, ", a[i]);
	}
	putchar('\n');
}
