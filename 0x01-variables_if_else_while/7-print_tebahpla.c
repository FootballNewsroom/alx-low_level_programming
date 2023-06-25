#include <stdio.h>
/**
 * main - Program entry point
 * Return: 0 (Success)
 */
int main(void)
{
    int i;
    for (i = 25; i >= 0; i--) {
        putchar('a' + i);
    }
    putchar('\n');

    return (0);
}

