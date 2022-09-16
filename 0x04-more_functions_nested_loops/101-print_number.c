#include "main.h"

/**
 * print_number - Uses a recursive way to print entire provided int
 * @n: n is the provided int
 */
void print_number(int n)
{
	unsigned int number;

	number = n;
	/* Check if negative and set positive*/
	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}
	/* Uses own function to print previous numbers using _putchar*/
	if (number > 9)
	{
		print_number(number / 10);
	}
	_putchar(number % 10 + '0');

}
