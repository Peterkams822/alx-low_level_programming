#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string parameter input
 *
 * Description: calculating the length of a string
 *
 * Return: 0 is success
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s; s++)
		counter++;

	return (counter);
}
