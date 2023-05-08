#include "main.h"
#include <stddef.h>
/**
  * _strchr- locates a character in a string.
  * @s: the string to be manipulated.
  * @c: the character to be located.
  * Return: pointer to first occurrence of
  *         the character c in the string s.
  *         or NULL if the character is not found.
  */

char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}
