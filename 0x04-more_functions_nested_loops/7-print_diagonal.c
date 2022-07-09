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
			putchar(' ');
			ii++;
		}

		putchar('\\');
		putchar('\\');
		i++;
	}
	if (i == 0)
		putchar('\n');
}
