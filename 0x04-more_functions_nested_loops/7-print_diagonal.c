#include "main.h"

/**
 * print_diagonal - diagonal line
 *
 * @n: input
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i;
	int spaces;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (spaces = 0; spaces < i; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
