#include "main.h"

/**
 * print_triangle - preints a triangle
 * @size: Size of the triangle
 */
void print_triangle(int size)
{
	int spaces;
	int hashes;
	int i;

	for (i = 0; i < size; i++)
	{
		spaces = size - i - 1;
		hashes = i + 1;
		while (spaces > 0)
		{
			_putchar(' ');
			spaces--;
		}
		while (hashes > 0)
		{
			_putchar('#');
			hashes--;
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
