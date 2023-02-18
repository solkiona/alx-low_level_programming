#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main: Entnry - point 
 * 
 * Return: 0 (Successful)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand()-RAND_MAX/2;
	if (n>0) 
	{
		printf("%d, is greater than 0: is positive",n);
	}
	else if (n==0)
	{
		printf("%d, is 0: is zero",n);
	}
	else 
	{
		printf("%d, is less than 0: is negative",n);
	}
}
