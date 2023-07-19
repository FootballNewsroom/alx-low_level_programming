#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - calls the function pointed to by f with the name as argument.
 * @name: argument.
 * @f: pointer to the function.
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}

/**
 * print_string - function that prints the name
 * using printf.
 * @name: argument.
 * @s: character to print.
 *
 * Return: 0 (Success).
 */
void print_string(char *name)
{
	printf("Name: %s\n", name);
}

int main_print_name(void)
{
	char name[] = "Josh";

	print_name(name, print_string);

	return (0);
}
