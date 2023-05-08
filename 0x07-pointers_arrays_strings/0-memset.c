#include "main.h"

/**
  * _memset- fills memory with a constant byte.
  * @s: the memory area to be filled with the constant byte b.
  * @b: the character that will fill the memory area pointed by s.
  * @n: the first n bytes of the memory area pointed to by s,
  *     that would be filled.
  * Return: pointer to string s.
  */

char *_memset(char *s, char b, unsigned int n)
{
	char *mem = s;

	while (n > 0)
	{
		*mem++ = b;
		n--;
	}

	return (s);
}
