#include "main.h"
/**
 * print_triangle - draws a triangle.
 * @size: takes in an integer for the height of the triangle.
 *
 */
void print_triangle(int size)
{
	int j, i, k;

	if (size <= 0)
		_putchar('\n');
	for (j = 0; j < size; j++)
	{
		for (i = size - j; i > 1; i--)
			_putchar(' ');
		for (k = j + i; k >= 1; k--)
			_putchar('#');
		_putchar('\n');
	}
}

