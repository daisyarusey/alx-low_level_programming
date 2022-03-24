#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143.
 * Return: always 0 (success).
 */

int main(void)
{
	long x, num = 612852475143;

	for (x = 2; x <= num; x++)
	{
		if (num % x == 0)
		{
			num = num / x;
			x--;
		}
	}
	printf("%lu\n", x);

	return (0);
}
