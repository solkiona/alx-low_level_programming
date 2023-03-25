#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add numbers
 * @argc: number of commanline arguments
 * @argv: array of commandline arguments
 * Return: 0 - successful
 */
int main(int argc, char **argv)
{
	int i;
	int j;
	int add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
					{
					printf("Error\n");
					return (1);
					}
		}
		add += atoi(argv[i]);
	}
	printf("%dd\n", add);
	return (0);
}
