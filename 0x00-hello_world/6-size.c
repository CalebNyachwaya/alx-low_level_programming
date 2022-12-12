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

	printf("Size of a char: %lu bytes(s)\n", sizeof(mychar));
	printf("Size of an int: %lu bytes(s)\n", sizeof(myNum));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(myLongInt));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(myLongLongInt));
	printf("Size of a float: %lu bytes(s)\n", sizeof(myFloat));

	return (0);

}
