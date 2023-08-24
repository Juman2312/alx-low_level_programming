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
	int i, t;


	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
