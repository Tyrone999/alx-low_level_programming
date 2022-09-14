#include "main.h"

/*
 * main - prints putchar
 *
 * Description: prints putchar while returning 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char a[8] = "_putchar";

	while (i < 8)
	{
		_putchar(a[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
