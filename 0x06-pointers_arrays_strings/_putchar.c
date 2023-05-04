#include "main.h"
#include <unistd.h>

/**
 * _putchar.c - writes c to stdout
 * @c: character
 * Return: 1 on success 0 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
