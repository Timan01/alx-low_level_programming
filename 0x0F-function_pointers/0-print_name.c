#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - A function that prints a name
 * @name: EMmanuel is my name
 * @f: function of name
 *
 * Return: Always 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
