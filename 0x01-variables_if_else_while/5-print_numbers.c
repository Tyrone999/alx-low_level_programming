#include <stdio.h>

/**
 * main - print 0-9
 *
 * Description: Prints 0-9 using a while loop
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	ch = 0;
	while (ch <= 9)
	{
		printf("%d", ch);
		ch++;
	}
	printf("\n");
	return (0);
}
