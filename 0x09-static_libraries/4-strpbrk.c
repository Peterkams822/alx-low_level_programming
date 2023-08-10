#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes.
 * @s: string
 * @accept: string to match
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found.
*/

char *_strpbrk(char *s, char *accept)
{
	int it, jt;
	char *b;

	it = 0;
	while (s[it] != '\0')
	{
		jt = 0;
		while (accept[jt] != '\0')
		{
			if (accept[jt] == s[it])
			{
				b = &s[it];
				return (b);
			}
			jt++;
		}
		it++;
	}
	return (0);
}
