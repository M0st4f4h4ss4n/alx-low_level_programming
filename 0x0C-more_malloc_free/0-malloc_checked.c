#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: Unsigned Integer
 * Return: a pointer to the allocated memory if malloc fails exit  98
 */

void *malloc_checked(unsigned int b)
{
	char *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
