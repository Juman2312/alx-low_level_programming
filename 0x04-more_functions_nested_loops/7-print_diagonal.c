#include "main.h"

/**
 * print_diagonal - iofj okttokk ik
 *
 * @n: is the num ijjrjj \ mfkk
 *	iuuhii jjjnk gf
*/

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (poctn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= postn; space++)
				_putchar(' ');
			_putchar(92); /*is equal to '/' char*/
			_putchar('\n');
		}

	}

}