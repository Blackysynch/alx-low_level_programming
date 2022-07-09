#include "main.h"
#include <stdio.h>

/**
 *more_numbers - print numbers 10 times between between 0 to 14
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int a = 0;

	while (a < 10)
	{
		int b = 0;

		for (b = 0; b <= 14; b++)
		{
			putchar((b / 10) + '0'); /* gives you the tens value */
			putchar((b % 10) + '0'); /* gives you the unit value */
		}
		putchar ('\n');
		a++;
	}
}
