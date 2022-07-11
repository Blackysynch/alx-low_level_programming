#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints a diagonal
 * @n: represents length of line
 * Return: returns void
 */
void print_diagonal(int n)
{
	int a;
	int skip;

	for (a = 0; a < n; a++)
	{
		for (skip = 0; skip < a; skip++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
	}

	if (a <= 0)
	{
		putchar('\n');
	}
}
