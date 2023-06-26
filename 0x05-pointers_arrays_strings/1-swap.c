#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: Swaps and stores address of b
 * @b: Swaps and stores address of a
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
