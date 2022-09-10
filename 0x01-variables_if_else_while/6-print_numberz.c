#include <stdio.h>

/**
 * main - print 0-9
 *
 * Description: Prints 0-9 using putchar
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
		ch++;
	}
	putchar('\n');
	return (0);
}
