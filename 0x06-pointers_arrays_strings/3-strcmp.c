#include "main.h"

/**
 * _strcmp - njhbg bgcf vfgt vfg vf vgt
 * @s1: bhgv 1
 * @s2: vgfb 2
 * Return: bhgn bghn vgf
*/

int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
			s1++;
			s2++;
	}
			return (equal);
}
