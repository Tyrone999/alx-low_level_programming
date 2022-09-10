#include <stdio.h>

/**
 * main - print alphabet in reverse
 *
 * Description: Prints the alphabet in lowercase reversed
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	ch = 'z';
	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
