#include "main.h"
/**
 *print_rev - print the reverse
 *@s: string
**/
void print_rev(char *s)
{
	int longi = 0;
	int m;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (m = longi; m > 0; m--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
