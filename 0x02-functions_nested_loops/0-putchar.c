#include "main.h"

/**
* main - Entry point
*
*  Return: Always 0 (Success)
*/
int main(void)
{

	int i;
	char str[] = "putchar";

	for (i = 0; i < 7; i++)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}
