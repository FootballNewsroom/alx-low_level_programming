#include <stdio.h>
/**
 * main - Entry point
 * print alphabet - A program that prints lowercase then uppercase followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
    int i;

    for (i = 0; i < 26; i++) {
        putchar('a' + i);
    }

    for (i = 0; i < 26; i++) {
        putchar('A' + i);
    }

    putchar('\n');

    return (0);
}

