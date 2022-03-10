# include "main.h"
# include <stdlib.h>

/**
* malloc_checked - allocated memory using malloc
*
* @b:memory to allocate
*
* Return: pointer to allocate memory or process termination if any eeror
*/

void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
