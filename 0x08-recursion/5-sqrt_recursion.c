#include "main.h"

/**
 * _sqrt_recursion - main funct
 * @n: int n
 * Return: int
 */

int _sqrt_recursion(int n)
{
	int sqrt(int n, int sq);
	int sq = 1;
	return (_sqrt(n, sq));
}

/**
 * _sqrt - _sqrt_recursion
 * @n: integer paramtr
 * @i: integer parameter
 * Return: sqrt
 */
int _sqrt(int n, int sq)
{
	if (n == sq * sq)
	{
		return (sq);
	}
	else if (sq < n)
	{
		return (sqrt_fun(n, ++sq));
	}
	else
	{
		return (-1);
	}
}
