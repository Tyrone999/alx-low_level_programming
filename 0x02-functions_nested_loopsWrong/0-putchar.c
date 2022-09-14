#include "main.h"
/**
 * main - prints _putchar
 *
 * Description: This returns _putchar
 *
 * Return: Successfully return 0
 */

int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
