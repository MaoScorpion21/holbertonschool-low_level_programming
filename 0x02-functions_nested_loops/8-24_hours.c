#include "main.h"

/**
 * jack_bauer - Write a function that prints every minute of the day of
 *              Jack Bauer, starting from 00:00 to 23:59
 *
 * Return: nothing
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar (h / 10 + 48);
			_putchar (h % 10 + 48);
			_putchar (':');
			_putchar (m / 10 + 48);
			_putchar (m % 10 + 48);
			_putchar ('\n');

		}

	}

}
