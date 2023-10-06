#include "main.h"

/**
 * _strpbrk - bvgfv vcfd cv cvf
 * @s: bvgf vcfd bhnb bh
 * @accept: bvgfv vcfgb vbgf vb
 * Return: vbgfv cvgb vb vg
*/

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
