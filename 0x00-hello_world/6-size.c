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

	printf("Size of a char: %lu byte(s)\n", sizeof(mychar));
	printf("Size of an int: %lu byte(s)\n", sizeof(myNum));
	printf("Size of a long int: %lu byte(s)\n", sizeof(myLongInt));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(myLongLongInt));
	printf("Size of a float: %lu byte(s)\n", sizeof(myFloat));

	return (0);
}
