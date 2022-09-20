#include "main.h"
#include <stdio.h>

/**
 * puts_half - last half of provided string
 * @str: The provided string
 */
void puts_half(char *str)
{
	int counter;
	int i;

	counter = 0;
	while (str[counter])
	{
		counter++;
	}
	if (counter % 2 == 0)
	{
		for (i = ((counter - 1) / 2) + 1; i < counter; i++)
		{
			putchar(str[i]);
		}
	}
	else
	{
		for (i = ((counter) / 2) + 1; i < counter; i++)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
