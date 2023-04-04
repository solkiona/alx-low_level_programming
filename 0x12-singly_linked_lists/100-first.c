#include <stdio.h>

/**
 * first - This function is called before the main function
 * Return: Returns nothing
 */
void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
