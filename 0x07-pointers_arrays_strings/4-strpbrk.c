#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to check
 * @accept: string to check against
 *
 * Return: pointer to byte in s that matches or NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int c, d;

	for (c = 0; s[c]; c++)
	{
		for (d = 0; accept[d]; d++)
		{
			if (s[c] == accept[d])
				break;
		}
		if (accept[d])
			return (s + c);
	}
	return (0);
}
