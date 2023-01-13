#include <stdio.h>

/**
 * main - main function
 * @argc: number of arguments taken by the function
 * @agrv: An array of pointers to the arguments
 *
 * Return: Always 0
 */

int main(int argc, char __attribute__((__unused__)) *agrv[])
{
	if (argc >= 1)
	{
	printf("%d\n", argc - 1);
	}

	return (0);
}
