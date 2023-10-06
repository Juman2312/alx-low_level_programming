#include "main.h"

/**
 * _puts - nhjg bhng nh nhg
 *
 * @str: gsfv vgb bbh nhjjm
 *
 * Return: nhjml
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
