#include <stdio.h>
/**
 * main -  function that prints its name followed by a new line
 * @argc: command line arguments
 * @argv: array containing program command line argument
 * Return: 0 - succes
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
