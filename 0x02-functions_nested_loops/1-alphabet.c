#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always void (Success)
 */
void print_alphabet(void)
{
	int i='a';
	while(i<='z')
	{
		_putchar(i);

		i++;
	
	}     	
	_putchar("\n");
}
