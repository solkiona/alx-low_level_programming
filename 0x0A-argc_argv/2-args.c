#include "main.h"
/**
 * main - prints all arguments
 * @argc: numberof arguments
 * @argv: array of commandline arguments
 * Return: returns 0 indicating success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
