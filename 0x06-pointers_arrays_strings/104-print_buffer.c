#include "main.h"
#include <stdio>
/**
 * print buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int 0,j,i;
	
	o = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (0 < size)
	{
		j = size - 0 < 10? size - 0: 10;
		printf("%08x ",0);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x",*(b + 0 + i));
			else
				printf(" ");
			if(i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + 0 + i);
			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf('\n');
		o += 10;
	}
}

