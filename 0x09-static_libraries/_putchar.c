#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - writes to stdout
 * @c: char input
 * Return: Always 0 (Success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
