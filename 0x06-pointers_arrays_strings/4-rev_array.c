#include "main.h"

/**
 * reverse_array - reverses the array
 * @a: array to reverse
 * @n: length of array
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = n - 1; i > n / 2; i--)
	{
		j = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = j;
	}
}
