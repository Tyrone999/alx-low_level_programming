#include <stdio.h>

/**
 * main - print base16
 *
 * Description: Prints base16 using putchar
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
	ch = 'a';
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
