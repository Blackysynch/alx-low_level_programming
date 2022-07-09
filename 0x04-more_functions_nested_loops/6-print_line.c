#include "main.h"
#include <stdio.h>

/**
 *  print_line - prints a line the same length as variable
 * @n: limits thelength of the line
 *  Return: void
 */

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		putchar('_');
	}
	putchar('\n');
}
