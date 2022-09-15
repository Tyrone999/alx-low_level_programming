#include "main.h"

/**
 * print_numbers - prints numbers 0 - 9
 *
 * Description: Prints numbers from 0 - 9 followed by a new line
 *
 * Return: returns 0 Sucsessfully
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
