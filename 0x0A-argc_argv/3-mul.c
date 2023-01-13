#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: the size of array
 * @argv: array of size argc
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	printf("Error\n");
	return (0);
}
