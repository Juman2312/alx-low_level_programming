#include "main.h"

/**
 * *_strcpy - mjnhj nhmjk njm mnj
 * @dest: nhjm mnjhn mjk mk
 * @src: njm mnjhh njmh mnhj mnju
 * Description: nhju nhynm njyh nhgtn mjkl mnhji
 * the buffer vgbhnjk mjhg
 * Return: bhnh nhju nhgtr vfr
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);

}


