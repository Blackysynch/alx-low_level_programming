#include "main.h"

/**
 * _isupper - checks code for uppercase
 *@c: integer input
 *Return 1 if true and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
