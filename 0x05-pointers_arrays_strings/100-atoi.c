#include "main.h"
#include <stdbool.h>

/**
 * _atoi - try parse to int
 * @s: character array / string
 * Return: converted value
 */

int _atoi(char *s)
{
	int i;
	unsigned int finalValue = 0;
	bool positive = true;
	bool done = false;

	i = 0;
	while (s[i])
	{
		if (s[i] == '-')
		{
			if (positive)
				positive = false;
			else
				positive = true;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			done = true;
			if (finalValue == 0)
			{
				finalValue += (s[i] - '0');
			}
			else
			{
				finalValue = (finalValue * 10) + (s[i] - '0');
			}
		}
		else if (done)
			break;
		i++;
	}

	if (positive == false)
		finalValue = -finalValue;

	return (finalValue);
}
