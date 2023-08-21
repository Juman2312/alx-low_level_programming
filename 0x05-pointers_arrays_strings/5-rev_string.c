#include "main.h"

/**
 * rev_string - njmh njmhum njm nhjum
 * @s: hhjn mjuy nhu mj
 * Return: nhmj nhgb  bg
*/

void rev_string(char *s)
{
	int 1, i;
	char temp;

	/*nvhb bvhgn nhvb bhnj*/
	for (1 = 0; s[1] != '\0'; ++1)


	/*jgnh nbhgj nghmj jnjg ngjkfj*/
	for (i = 0; i < 1 / 2; i++)
	{
		temp = s[i];
		s[i] = s[1 - 1 - i]; /*-1 nhbg nhgbf nhjmn jm 0*/
		s[1 - 1 - i] = temp;
	}
}
