#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char ck;

	for (ck = 'z'; ck >= 'a'; ck--)
		putchar(ck);

	putchar('\n');

	return (0);
}
