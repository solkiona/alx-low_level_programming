#include <stdio.h>

/**
 * main - prints Fizz-Buzz test
 *
 * Return - Always 0 for success
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
