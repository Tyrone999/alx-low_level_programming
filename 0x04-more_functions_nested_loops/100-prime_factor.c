#include <stdio.h>

/**
 * main - starting point of the function
 *
 * Description: this will print the largest prime factor of 612852475143
 *
 * Return: always 0 (success)
 */
int main(void)
{
	long int num;
	long int i;
	long int max;

	num = 612852475143;
	i = 2;

	while (num != 0)
	{
		if (num % i != 0)
		{
			i++;
		}
		else
		{
			max = num;
			num = num / i;
			if (num == 1)
			{
				printf("%ld\n", max);
				break;
			}
		}
	}
	return (0);
}
