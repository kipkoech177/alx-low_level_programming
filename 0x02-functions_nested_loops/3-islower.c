#include "main.h"

/**
 * _islower - checks for lower case characters
 * @c: the character is checked
 * Return: 1 for lowercase characeter or 0 for if is capital
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
