#include "main.h"

/**
 * more_numbers- print numbers from 0 to 14 ten times.
 *
 */
void more_numbers(void)
{

	int num;
	int i;

	i = 0;

	while (i < 10)
	{
		for (num = 0; num <= 14; num++)
			_putchar(num + '0');
		i++;
	}
	_putchar('\n');
}	
