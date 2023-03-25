#include "main.h"
/**
 * main - prints number of argument passed to it
 * @argc: number of commandline arguments
 * @argv: array of commandline arguments
 * Return: returns 0 indicating successful
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
