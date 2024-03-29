#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: char tpe string
 * @src: char type string
 * Description: copy the string pointed to by 'src' to
 * the buffer pointed to by 'dest'
 * Return: Pointer to 'dest'
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
