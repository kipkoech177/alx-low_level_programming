#include "main.h"
#include <unistd.h>
/**
 * putchar - writed the character to standard out
 *
 * Return: Always o (success)
 */
int _putchar(char c)
	{
		return (write(1, &c, 1));
	}
