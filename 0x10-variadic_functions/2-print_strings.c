#include "variadic_functions.h"

/**
  * print_strings- prints strings, followed by a new line.
  * @separator: the string to be printed between the strings.
  * @n: the number of strings passed to the function.
  * Return: nothing.
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *print_str;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		print_str = va_arg(string, char *);
		if (print_str == NULL)
			printf("(nil)");
		else
			printf("%s", print_str);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
