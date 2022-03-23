#include "main.h"
/**
 * _puts - prints a string.
 * @str: value to be evaluated.
 */
void _puts(char *str)
{
	int i;

	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
