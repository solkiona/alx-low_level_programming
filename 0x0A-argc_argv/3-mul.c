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
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);
	return (0);

}
