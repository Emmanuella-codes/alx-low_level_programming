#include <stdio.h>
/**
 * main - print _putchar followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void) {
	int string[] = {72, 111, 108, 98, 101, 114, 116, 111, 110};
	int result, size;

	size = sizeof(string) / sizeof(int);
	for (result = 0; result < size; result++) {
		_putchar(string[result]);
	}
	_putchar("\n");
	return (0);
}
