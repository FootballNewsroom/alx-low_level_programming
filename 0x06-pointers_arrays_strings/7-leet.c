#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * letters a and A are replaced by 4
 * letters e and E are replaced by 3
 * letters o and O are replaced by 0
 * letters t and T are replaced by 7
 * letters l and L are replaced by 1
 *
 * Return: pointer to str
 */

char *leet(char *str)
{
	char *leet_chars = "aAeEoOtTlL";
	char *leet_replacements = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_chars[j] != '\0'; j++)
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_replacements[j];
				break;
			}
		}
	}
	return (str);
}

