#include <stdio.h>

/**
 * main - main function, prints all arguments it receives
 * @argc: represents the number of the arguments entered
 * @argv: array of size argc
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}

