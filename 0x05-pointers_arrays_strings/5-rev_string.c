#include "main.h"

/**
 * rev_string - Write a function that reverses a string.
 *
 * @s: parameter
 * Return: void
 */

void rev_string(char *s)
{
	int x = 0;
	int y = 0;
	char recibe;

	if (s[0] == '\0')
	{
		s = "\0";
	}
	else
	{
		y = (_strlen(s) - 1);

		while (x < y)
		{
			recibe = s[x];
			s[x] = s[y];
			s[y] = recibe;
			x++;
			y--;
		}
	}
}

/**
 * _strlen - Function that returns the length of string
 * @s: parameter
 * Return: i
 */

int _strlen(char *s)
{
	int i = 1;

	if (s[0] == '\0')
	{
		i = 0;
	}
	else
	{
		while (s[i] != '\0')
		{
			i++;
		}
	}
	return (i);
}
