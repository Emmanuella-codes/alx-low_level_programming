#include "main.h"
#include <stdlib.h>

/**
  * argstostr- concatenates all the arguments of program.
  * @ac: the number of argument contains the name of the program.
  * @av: the arguments.
  * Return: pointer to concatenated string on success
  *         null on failure.
  */

char *argstostr(int ac, char **av)
{
	char *concat_args;
	int i, j, len = ac, index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	concat_args =  malloc(sizeof(char) * (len + 1));

	if (concat_args == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			concat_args[index++] = av[i][j];
		concat_args[index++] = '\n';
	}
	concat_args[len + 1] = '\0';
	return (concat_args);
}
