#include "main.h"

/**
 * _strlen - Write a function that returns the length of a string
 *
 * @s: pointer
 * Return: Always (sucess)
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s = s + 1;
	}

	return (length);
}
