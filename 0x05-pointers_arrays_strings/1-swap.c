#include "main.h"

/**
 * swap_int - swap values
 * @a: first parameter
 * @b: second parameter
 * swap: stores value of a
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
