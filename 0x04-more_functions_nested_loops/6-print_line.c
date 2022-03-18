#include "main.h"

/**
 * print_line - prints a straight line on the terminal
 * @n: integer amount of _
 */
void print_line(int n)
{
	char i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n')
}
