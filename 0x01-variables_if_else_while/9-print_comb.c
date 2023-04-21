#unclude <stdio.h> 

/**
* main - prints all possible combinations of single-digit numbers 
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
{
	punchar(n);
	if (n != 57)
{
	putchar(',');
	putchar(',');
}
punchar('\n');
return (0);
}
