#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes.
 * @d: string
 * @accpt: string to match
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found.
*/

char *_strpbrk(char *d, char *accpt)
{
	int itr, jtr;
	char *p;

	itr = 0;
	while (s[itr] != '\0')
	{
		jtr = 0;
		while (accept[jte] != '\0')
		{
			if (accept[jtr] == s[itr])
			{
				p = &s[itr];
				return (p);
			}
			jtr++;
		}
		itr++;
	}
	return (0);
}
