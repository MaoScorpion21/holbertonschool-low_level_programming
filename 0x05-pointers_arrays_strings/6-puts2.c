#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with
 *         the first character, followed by a new line.
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int cont = 0;

	while (str[cont] != '\0')
	{
		if (cont % 2 == 0)
		{
			_putchar(str[cont]);
		}
		cont++;
	}
	_putchar('\n');
}
