#include "main.h"
/**
 * *_strcpy - function that copies the string pointed to by src
 *including the terminating null byte to the buffer pointed to by dest
 *@dest: copy to
 *@src: copy from
 *Return: string
**/
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		l++;
	}
	for ( ; x < 1 ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}

