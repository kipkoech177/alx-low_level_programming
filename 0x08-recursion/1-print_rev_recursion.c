#include "main.h"
/**
 * _print_rev_recursion(char *s)-prints a reverse string
 * @s: the inpt
 */
void _print_rev_recusion(char *s)
{
	if (*s)
	{
		_print_rev_recusion(s + 1);
		_putchar(*s);
	}
}
