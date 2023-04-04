#include "main.h"
/**
 *_strpbrk - Entry point
 *@s: input
 *@accept: input
 *Return: always 0
**/
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == aceeprt[k])
			{
				return (s);
			}
		}
	s++;
	}
	return ('\0');
}
