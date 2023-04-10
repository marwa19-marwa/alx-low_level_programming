#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: the character to input
 *
 * Return: 1 on success
 * on error -1 is returned and an error is set
**/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
