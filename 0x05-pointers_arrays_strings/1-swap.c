#include "main.h"

/**
 * main - check the code 
 * @a: first parameter
 * @b: second parameter
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
