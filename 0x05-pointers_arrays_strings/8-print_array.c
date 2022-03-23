#include "main.h"
/**
 * print_array - prints n elements of array.
 * @a: array of integers.
 * @n: number of elements to be printed.
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%s", a[j]);

		if (j != (n - 1))
			printf(", ");
	}
	printf("\n");
}
