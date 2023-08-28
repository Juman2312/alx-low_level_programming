#include "main.h"
#include <unistd.h>

/**
 * _putchar - nbhn bgvfg bv bgh
 * @c: nbhg bvg vb vbghj
 *
 * Return: bnhgb vfgh
 * On error bnhgb bvg vbghn vfguy
*/

int _putchar(char c)
{
	return (write(1, &c,1));
}
