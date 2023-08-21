#include "main.h"

/**
 * rev_string - njmh njmhum njm nhjum
 * @s: hhjn mjuy nhu mj
 * Return: nhmj nhgb  bg
*/

void rev_string(char *s)
{
	int l, i;
	char temp;

	/*nvhb bvhgn nhvb bhnj*/
	for (l = 0; s[l] != '\0'; ++l)
		;

	/*jgnh nbhgj nghmj jnjg ngjkfj*/
	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i]; /*-1 nhbg nhgbf nhjmn jm 0*/
		s[l - 1 - i] = temp;
	}
}
