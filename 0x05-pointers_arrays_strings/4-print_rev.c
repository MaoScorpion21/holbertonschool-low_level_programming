#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints a string, in reverse
 *             followed by a new line
 *
 * @s: string entering
 * Return: Always 0. (sucess)
 */

void print_rev(char *s)
{
int i = 0;

while (*(s + i))
	i++;
i = i - 1;
while (i >= 0)
{
	_putchar(*(s + i));
	i--;
}
_putchar('\n');
}
