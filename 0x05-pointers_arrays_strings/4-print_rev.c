#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints the provided string in reverse
 * @s: The provided string
 */

void print_rev(char *s)
{
	int counter;

	counter = 0;
	while (s[counter])
	{
		counter++;
	}
	i--;
	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
