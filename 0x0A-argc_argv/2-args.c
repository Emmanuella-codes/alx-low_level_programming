#include "main.h"
#include <stdio.h>

/**
 * main - the func that prints all args per line
 * @argc: arguments count
 * @argv: arguments vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);

	}
		return (0);
}
