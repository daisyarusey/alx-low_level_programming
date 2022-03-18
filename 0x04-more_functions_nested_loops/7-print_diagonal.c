#include "main.h"
/**
 * print_diagonal - draws a diagonal line on terminal.
 * @n:  the number of times the character \ should be printed.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = i; j <= i; j++)
			_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
