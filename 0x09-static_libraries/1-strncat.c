#include "main.h"

/**
 * _strncat -jhnb bgvf vfg vfgt vfr
 *
 * @dest: bgh bgtf vfdc
 * @src: bgvf vfcd vfc vfg
 * @n: bgvf vfdc vfcd cde cft
 *
 * Return: bghf vgt vfrd
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];

	dest[c + i] = '\0';

	return (dest);
}
