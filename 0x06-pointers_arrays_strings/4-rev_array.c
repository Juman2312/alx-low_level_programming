#include "main.h"

/**
 * reverse_array - bghf vgfdc cfd cfdxs cfdv vf
 * @a: bghn bvgf vgfv cvf
 * @n: nbhg vgfr vcfdc cfd bg
 *
 * Return: bhgn bvgf
*/

void reverse_array(int *a, int n)
{
	int i, j, t;


	for (i = 0; j = (n - 1); i < j ; i++; j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
