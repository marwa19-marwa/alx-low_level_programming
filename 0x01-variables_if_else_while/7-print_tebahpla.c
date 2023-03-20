#include <stdio.h>
/**
  *main - Entry point
  *Description: print lowercase alphabet in reverse
  *Return: always 0
**/
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
