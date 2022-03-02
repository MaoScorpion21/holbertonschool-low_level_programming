#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination of copy
 * @src: memory area to copy
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		*(dest + c) = *(src + c);
	}
	return (dest);
}
