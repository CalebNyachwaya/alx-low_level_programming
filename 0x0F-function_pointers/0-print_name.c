#include "main.h"
/**
 * print_name - Function that prints a name.
 * @name: Name variable to print
 * @f: name of the function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
