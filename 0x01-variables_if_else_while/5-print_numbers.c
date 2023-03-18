#include <stdio.h>
/**
 *main - Entry point
 *Description: print all single digit nubers of base 10 starting from 0
 *Return: always 0
*/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
