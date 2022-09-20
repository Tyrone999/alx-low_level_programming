#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every odd character within provided string
 * @str: The provided string
 */

void puts2(char *str)
{
	int counter;
	int print = 1;

	counter = 0;
	while (str[counter])
	{
		if (print == 0)
		{
			print = 1;
		}
		else
		{
			print = 0;
			putchar(str[counter]);
		}
		counter++;
	}
	putchar('\n');
}
