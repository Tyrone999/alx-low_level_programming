#include "main.h"

/**
 * _isupper - Checks if c uppercase
 * @c: c is the value that is compared
 * Return: returns 1 if true and 0 if false
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
