#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int c, d, q, m = 0, t = 0;

	for (c = 0; c < size; c++)
	{
		q = (c * size) + c;
		m += *(a + q);
	}
	for (d = 0; d < size; d++)
	{
		q = (d * size) + (size - 1 - d);
		t += *(a + q);
	}
	printf("%i, %i\n", m, t);
}
