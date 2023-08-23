#include "main.h"

/**
 * _strncpy - nhbg bvfg vgfcd vfg bgt
 *
 * @dest: bnhg vfgt vfg
 * @src: vfgb vfg vfgbv nhg
 * @n: bgvf vcdf cvf vcfd
 *
 * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;


	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
