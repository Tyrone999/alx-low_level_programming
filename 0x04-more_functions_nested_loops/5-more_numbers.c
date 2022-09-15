#include "main.h"

/**
 * more_numbers - print more numbers and 10 times
 * Description: prints numbers 0 through 14 10 times
 * return: sucsessfully 0
 */
void more_numbers(void)
{
	int i;
	int j;
	int c;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			c = j;
			if (c >= 10)
			{
				c = c - 10;
				_putchar('1');
			}
			c = c + 48;
			_putchar(c);
		}
		_putchar('\n');
	}
}
