#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;
	while (*s)
	{
	length = length + 1;
	s++;
	
	}

	return (length);
}
