#include <stdio.h>

/**
  * main- prints the number of arguments passed into it.
  * @argc: the number of the program arguments.
  * @argv: array of pointers to strings.
  * Return: Always 0 (Success)
  */

int main(int argc, __attribute__((unused)) char *argv[])
{
	if (argc >= 1)
		printf("%d\n", argc - 1);
	return (0);
}
