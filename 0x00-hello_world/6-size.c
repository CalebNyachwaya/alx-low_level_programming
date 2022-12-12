#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char mychar;
	int myNum;
	long int myLongInt;
	long long int myLongLongInt;
	float myFloat;

	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(mychar));
	printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(myNum));
	printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(myLongInt));
	printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(myLongLongInt));
	printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(myFloat));

	return (0);

}
