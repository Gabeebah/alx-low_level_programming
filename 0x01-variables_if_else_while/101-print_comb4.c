#include <stdio.h>

/**
* main - prints all possible different combinations of three digits
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int m;
	int l;

	e = 0;
	while (n < 10)
	{
		d = 0;
		while (d < 10)
		{
			l = 0;
			while (l < 10)
			{
				if (l > m && m > n)
				{
					putchar('0' + n);
					putchar('0' + m);
					putchar('0' + l);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(',');
					}
				}
				n++;
			}
			m++;
		}
		l++;
	}
putchar('\n');
return (0);
}
