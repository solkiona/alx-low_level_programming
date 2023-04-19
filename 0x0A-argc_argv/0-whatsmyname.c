#include "main.h"
/**
 * main - prints the name of the program followed by a new line
 * @argc: number of commandline
 * @argv: command line array
 * Return: returns 0 indicating successful
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
