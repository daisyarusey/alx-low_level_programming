#include "main.h"

/**
 * more_numbers- print numbers from 0 to 14 ten times.
 *
 */
void more_numbers(void)
{

	int c;
	int i;

	i = 0;

	while (i < 10)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
			}
			else
			{

				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
		i++;
}
