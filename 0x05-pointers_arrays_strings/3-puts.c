#include "main.h"
#include <stdio.h>

/**
 * _puts - prints the provided string
 * @str: The provided string
 */

void _puts(char *str)
{
	int counter;

	counter = 0;
	while (str[counter])
	{
		putchar(str[counter]);
		counter++;
	}
	putchar('\n');
}
