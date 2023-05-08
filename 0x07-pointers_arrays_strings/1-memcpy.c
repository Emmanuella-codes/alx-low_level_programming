#include "main.h"

/**
  * _memcpy- copies memory area.
  * @dest: the destination area.
  * @src: the source area.
  * @n: the number of bytes to be copied from dest to src.
  * Return: pointer to the memory area dest.
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *mem = dest;

	while (n--)
	{
		*mem++ = *src++;
	}

	return (dest);
}
