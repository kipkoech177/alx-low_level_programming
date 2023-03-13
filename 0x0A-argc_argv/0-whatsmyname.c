#include <stdio.h>
#include "main.h"
/*
 * main - a program that prints its name
 * @agrc: count the number of parametes
 * @agrv: the array of characters that are entered int
 * Return: Always 0 (succes)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s", *argv);
	return (0);
}
