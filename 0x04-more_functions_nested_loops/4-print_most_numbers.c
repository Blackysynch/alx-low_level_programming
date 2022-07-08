#include "main.h"
#include <stdio.h>

/** print_most_numbers - prints numbers from 0 tO 9
 * 
 *
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int b = 0;
	
	while (b <= 9)
	{
		if (b != 2 && b != 4)
		{
			putchar(b + '0');
		}

		b++;
	}
	putchar('\n');
}
