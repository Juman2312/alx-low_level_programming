#include "main.h"

/**
 * leet - nhbg bvg bvg bg
 * @c: nhbg bgvf bv
 * Return: bgnv bv
*/

char *leet(char *)
{
	char *cp = c;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*c)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			/*32 is the defffrkgbi ngj*/
			if (c == key[i] || *c == key[i] + 32)
			{
				*c = 48 + value[i];
			}
		}
		c++;
	}
	return (cp);
}
