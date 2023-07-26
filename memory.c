#include "main.h"

/**
 * bfree - free a ptr and NULLs the address
 * @ptr: address of  ptr to free
 *
 * Return: 1 if freed, otherwise 0
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
