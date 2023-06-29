#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters of a string to uppercase.
 * @m: pointer to string.
 *
 * Return: pointer to uppercase string.
 */

char *string_toupper(char *m)
{
        int length_of_string;

        length_of_string = 0;

        while (m[length_of_string] != '\0')
	{
		if (m[length_of_string] >= 97 && m[length_of_string] <= 122)
		{
			m[length_of_string] = m[length_of_string] - 32;
		}
		length_of_string++;
	}
	return (m);
}


