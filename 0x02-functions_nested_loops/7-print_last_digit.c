#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 *
 * @nld: number's last digit result
 *
 * Return: value of the last digit
 */
int print_last_digit(int nld)
{
	int val;

	val = (nld % 10);

	if (val < 0)
	{
		val = (-1 * val);
	}

	_putchar(val + '0');
	return (val);
}
