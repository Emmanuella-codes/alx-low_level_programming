#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = _islower('H');
	_putchar(n + '0');
	n = _islower('o');
	_putchar(n + '0');
	n = _islower(108);
	_putchar(n + '0');
	_putchar('\n');
	return (0);
}
