#include <stdio.h>

/**
 * main - print 0-9 custom
 *
 * Description: Prints 0-9 using putchar with additional rules
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	ch = '0';
	while (ch <= '9')
	{
		putchar(ch);
		if (ch != '9')
		{
			putchar(',');
			putchar(' ');
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
