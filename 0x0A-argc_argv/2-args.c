#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0
**/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argc > 1; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
