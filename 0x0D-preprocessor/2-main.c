#include <stdio.h>

/**
 * main - Entry.
 * __FILE__ - predefined macro.
 * @s: string literal containing the name of the
 * current source file.
 *
 * Return: 0 (Success).
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
