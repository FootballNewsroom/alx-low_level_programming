#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * print program - A program that prints a random number n as positive or negative
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negtive\n", n);
	
	return (0);
}
