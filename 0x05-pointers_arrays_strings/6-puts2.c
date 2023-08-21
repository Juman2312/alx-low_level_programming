#include "main.h"

/**
 * puts2 - nhjm nhgb nhmj mjk
 *
 * @str: nhjmj nhbgb bghn njmu
 *
 * Return: bnhm hnjm
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
