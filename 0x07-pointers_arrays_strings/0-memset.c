#include "main.h"

/**
 * _memset - bhgbv vbgft vbgh b nhgyu
 * @s: nhbgbh bn bnhg bnhg
 * @b: bhg bhngvf vg nbhjm mnbhgfv
 * @n: bhngvf vgb bvhnb njmk
 *
 * Return: nbhn mnjhbg vg
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
