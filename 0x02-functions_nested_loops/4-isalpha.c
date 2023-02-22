#include "main.h"
/**
 * _isalpha - checks whether all the characterss are alphabets
 * @c: - checks whether the characters are alpha
 * Return: 1 when th character is a letter else 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
