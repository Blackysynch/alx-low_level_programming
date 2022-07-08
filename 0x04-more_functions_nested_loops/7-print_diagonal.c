#include "main.h"

/**
 * print_diagonal - print a diagonal
 * @n: number of \ to print
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0, ii;

	while (i < n && n > 0)
	{
		ii = 0;
		while (ii < i)
		{
			_putchar(' ');
			ii++;
		}

		_putchar('\\');
		_putchar('\\');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
