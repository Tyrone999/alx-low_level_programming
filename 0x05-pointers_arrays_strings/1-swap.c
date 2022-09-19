#include "main.h"

/**
 * swap_int - Swaps values of a and b
 * @a: first pointer
 * @b: second pointer
 */
void swap_int(int *a, int *b)
{
	int valb;
	int vala;

	vala = *a;
	valb = *b;

	*b = vala;
	*a = valb;
}
