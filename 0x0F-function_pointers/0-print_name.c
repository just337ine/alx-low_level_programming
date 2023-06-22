#include "func.h"
/**
 * print_name - a function that prints a name.
 * @name: string
 * @f: a function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
