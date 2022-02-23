#include "main.h"

/**
 * swap_int -- Write a function that swaps the values of two integers
 *
 * @a: a is the first integer
 * @b: b es the second integer
 *
 */

void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
