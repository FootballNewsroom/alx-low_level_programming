#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	printf("size of a char: %lu byte(s)\n",(unsigned long)sizeof(char));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long long int));
	printf("size of a float: %d byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
