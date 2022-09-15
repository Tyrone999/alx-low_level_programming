#include "main.h"

/**
 * _isdigit - checks if c is a digit or not
 * @c: c is the value getting checked
 * Return: 1 if true and 0 if false
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
