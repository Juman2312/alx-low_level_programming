#include "main.h"

/**
 * _strcat - nhjm nhju bghyn
 *
 * @dest: njhg vfgtr vfg vgf hg
 * @src: bgfv vfd vcdfr vfgt
 *
 * Return: bgv vfgb vfgb bg
*/

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	while (dest[c])
		c++;
	for (c2 = 0; src[c2]; c2++)
		dest[c++] = src[c2];
	return (dest);
}
