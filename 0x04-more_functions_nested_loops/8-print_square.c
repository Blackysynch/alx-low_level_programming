#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square
 * @size: represents size of square
 * Return: void
 */
void print_square(int size)
{
	int a;
	int b;

	for (b = 0; b < size; b++)
	{
		for (a = 0; a < size; a++)
		{
			putchar('#');
		}
		putchar('\n');
	}

	if (b <= 0)
	{
		putchar('\n');
	}
}
