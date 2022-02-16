#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase followed a new line
 *
 * Author: Marco Antonio Ordóñez - @MaoScorpion21
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
