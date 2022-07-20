#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

/**
 * print_number - prints numbers
 * @n: number to be printed
 * Return: void
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	/*print the first few digits*/
	if ((num / 10) > 0)
		print_number(num / 10);

	/*print the last digit*/
	_putchar((num % 10) + 48);
}
