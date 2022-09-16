#include "main.h"

/**
 * print_number - Uses a recursive way to print entire provided int
 * @n: n is the provided int
 */
void print_number(int n)
{
	/* Check if negative and set positive*/
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	/* Uses own function to print previous numbers using _putchar*/
	if ((n / 10) != 0)
		print_number(n / 10);
	_putchar(n % 10 + '0');

}
