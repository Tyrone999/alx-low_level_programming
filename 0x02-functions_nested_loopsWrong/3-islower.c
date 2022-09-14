#include "main.h"

/**
 * _islower - a function checking for a lower case char
 * @c: single letter input
 * Return: 1 if true, 0 if false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
