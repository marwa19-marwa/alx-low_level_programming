#include "main.h"
/**
 *puts2 - function prints every other character of a string
 *starting with the first character
 *followed by a new line
 *@str: input
 *Return: print
**/
void puts2(char *str)
{
	int longi = 0;
	int t = 0;

	char *y = str;

	int m;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;

	for (m = 0; m <= t; m++)
	{
		if (m % 2 == 0)
	{
			_putchar(str[m]);
	}
	}
	_putchar('\n');
}
