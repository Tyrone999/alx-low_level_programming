#include "main.h"
/**
 * print_most_numbers - prints most numbers
 * Description: prints all numbers excluding 2&4
 * Return: returns 0 Sucsessfully
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2')
			i++;
		if (i == '4')
			i++;
		_putchar(i);
	}
	_putchar('\n');
}
