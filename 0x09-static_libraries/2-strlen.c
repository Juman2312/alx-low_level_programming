#include "main.h"

/**
 * _strlen - nhfg nhg nhgy nhu
 *
 * @s: nhj nhju  nhhjju
 *
 * Return: vxfg bghyn nhu
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
