#include "main.h"

/**
 * puts-half - nhjm njmh bhn njmk
 *
 * @str: bnhj njmkh bhnmj
 *
 * Description: gndkgj nhjm njm
*/

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;


	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}