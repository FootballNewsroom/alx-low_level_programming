#include "main.h"

/**
 * main - print integers
 *
 * Return: pointer to n
 */ 

void print_number(int n)
{
	int divisor, temp, digit;

	divisor = 1;
	temp = n;

        if (n == 0)
        {
                _putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	
	while (temp > 9)
	{
		divisor *= 10;
		temp /= 10;
	}
	
	while (divisor > 0)
	{
		digit = n / divisor;
		_putchar('0' + (digit % 10));
		n %= divisor;
		divisor /= 10;
	}
}

