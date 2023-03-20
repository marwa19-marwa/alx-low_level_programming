#include <stdio.h>
/**
 *main - Entry point
 *Description: print all possible combinations of three digits
 *Return: always 0
 **/
int main(void)
{
	int m, n, p;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			if (p > m && m > n)
			{
				putchar(n);
				putchar(m);
				putchar(p);
				if (n != 55 || m != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
