#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints the opcodes of itself
* @argc: the number of arguments supplied to the program
* @argv: an array of pointers to the arguments
*
* Return: Always 0
*/
int main(int argc, char *argv[])
{
int bytes, index;
int (*aaddress)(int, char **) = main;
unsigned char opcode;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
exit(2);
}

for (index = 0; index, bytes; index++)
{
opcode = *(unsigned char *)aaddress;
printf("%.2x", opcode);

if (index == bytes - 1)
continue;
printf(" ");

aaddress++;
}

printf("\n");

return (0);
}
