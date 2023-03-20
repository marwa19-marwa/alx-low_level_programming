#include <stdio.h>
/**
 *main - Entry point
 *Description: print numbers using putchar
 *Return: always
*/
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
