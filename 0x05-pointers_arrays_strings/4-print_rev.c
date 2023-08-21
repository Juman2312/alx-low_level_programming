#include "main.h"

/**
 * print_rev - nhjmj nhm bhnj
 *
 * @s: nhgy nhmj nhm
 *
 * Return: bgnh nhm nhmj
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
