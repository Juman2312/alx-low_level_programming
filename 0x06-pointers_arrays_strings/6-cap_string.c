#include "main.h"

/**
 * isDelimiter - njhnb grygfv dvc vgf vcg
 * @c: bhn bhgb nhuy bhgf
 * Return: nhju vcgdt
*/

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n, .!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}


/**
 * cap_string - capitalizes all words of string
 * @s: input string
 * Return: string with capitalized words
*/

char *cap_string(char *)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimit = 1;
		else if (isLower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}
