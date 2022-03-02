#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string in which to check for needle
 * @needle: substring to find in haystack
 *
 * Return: pointer to beginning of needle in haystack or NULL if no match
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int c = 0, d = 0;

	while (haystack[c])
	{
		while (needle[d] && (haystack[c] == needle[0]))
		{
			if (haystack[c + d] == needle[d])
				d++;
			else
				break;
		}
		if (needle[d])
		{
			c++;
			d = 0;
		}
		else
			return (haystack + c);
	}
	return (0);
}
