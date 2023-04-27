#include "main.h"

/**
  * print_triangle- prints a triangle, followed by a new line.
  * @size: the size of triangle.
  * Return: void.
  */

void print_triangle(int size)
{
	int i, j, m, c = size - 1;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = c; j > 0; j--)
				_putchar(' ');
			for (m = 0; m < i + 1; m++)
				_putchar('#');
			c--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
