#include "main.h"

/**
 * _memcpy - nbhgv bvg vb vgfcd cv
 * @dest: vbgfv vfg vf vgf
 * @src: vcfv cvfg vgbh
 * @n: bvgfc cfde vfgbv cdd
 *
 * Return: bvgf cdfrg vg bn
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
