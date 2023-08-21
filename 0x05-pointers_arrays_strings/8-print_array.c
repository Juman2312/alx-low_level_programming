#include "main.h"

/**
 * print_array - nbhjn nbhjm njbmgj
 *
 * @n: bvgfh bvhfn nvhjm mk
 * @a: nbhgmj mnj mjf mjnkf
 *
 * Return: nbhg nbhgj nbjgm mjk
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
