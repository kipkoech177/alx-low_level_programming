#include <stdio.h>

/**
 * main - Entry
 * Return: always 0
 */
int main(void)
{
	int num;
	char ck;

	for (num = 0; num < 10; num++)
		putchar ((num % 10) + '0');

	for (ck = 'a'; ck <= 'f'; ck++)
		putchar(ck);

	putchar('\n');

	return (0);
}
