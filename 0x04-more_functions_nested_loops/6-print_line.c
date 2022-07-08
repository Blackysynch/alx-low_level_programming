#include "main.h"

/**
 * print_line - Prints a line number of times
 *@n: variable
 *
 * Return: Always 0.
 */

void print_line(int n)
{
	int a = 0;

	while (a < n && n > 0)
	{
		putchar('_');
		a++;
	}

	putchar('\n');
}
