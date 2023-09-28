#include "main.h"
#include <unistd.h>

/**
 * _putchar - print a charactar
 * @c: the charcter
 * Return: always return 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
