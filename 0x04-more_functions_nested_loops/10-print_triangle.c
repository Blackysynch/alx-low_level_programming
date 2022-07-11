#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle
 * @size: gives size of triangle
 * Return: return 0
 */

void print_triangle(int size)
{
	int a;
	int b;
	int spaces;

	for (a = 0; a < size; a++)
	{
		for (spaces = size - 1 - a; spaces > 0; spaces--)
		{
			putchar(' ');
		}
		for  (b = 0; b <= a; b++)
		{
			putchar('#');
		}
		putchar('\n');
	}
	if (size <= 0)
	{
		putchar('\n');
	}

}
