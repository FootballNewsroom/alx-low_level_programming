#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @x: pointer to string.
 *
 * Return: pointer to x.
 */

char *cap_string(char *x)
{
    int i = 0;
    int capitalize_next = 1;

    while (x[i] != '\0')
    {
        if (x[i] == ' ' || x[i] == '\t' || x[i] == '\n' ||
            x[i] == ',' || x[i] == ';' || x[i] == '.' ||
            x[i] == '!' || x[i] == '?' || x[i] == '"' ||
            x[i] == '(' || x[i] == ')' || x[i] == '{' ||
            x[i] == '}')
        {
            capitalize_next = 1;
        }
        else if (capitalize_next)
        {
            if (x[i] >= 'a' && x[i] <= 'z')
            {
                x[i] = x[i] - 'a' + 'A';
            }
            capitalize_next = 0;
        }

        i++;
    }

    return (x);
}

