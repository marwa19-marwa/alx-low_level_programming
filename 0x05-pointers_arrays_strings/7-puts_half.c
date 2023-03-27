#include "main.h"
/**
 *puts_half - print half of a string
 *should print the last n characters of the string
 *where n = (length_of_the_string - 1) / 2
 *@str: input
 *Return: half of input
**/
void puts_half(char *str)
{
	int a, n, longi;

	for (a = 0; str[a] != '\0'; a++)
		longi++;
	n = (longi / 2);

	if ((longi % 2) == 1)
	{
		n = ((longi + 1) / 2);
	}

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
