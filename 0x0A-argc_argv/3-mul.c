#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: number of commandline arguments
 * @argv: array of commandline arguments
 * Return: return 0 indicating the program is successful
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);

}
