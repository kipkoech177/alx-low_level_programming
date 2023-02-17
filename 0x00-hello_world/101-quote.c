#include <stdio.h>
#include <unistd.h>
/**
 *  main - program that prints a line to the standard error
 *  Return: returns 1 (successful)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
