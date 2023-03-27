#include "main.h"
/**
 *print_array - print n numbers of an array
 *@a: the name of the array
 *@n: number of array elts to be printed
 *Return: a et n inputs
**/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
		printf("\n");
}
