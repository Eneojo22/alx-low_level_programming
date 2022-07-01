#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: ALways 0 (success)
 */
int main(void)
{
	int integerType;
	float floatType;
	double doubleType;
	char charType;
	printf("Size of int: %1d bytes\n",sizeof(integerType));
	printf("Size of float: %1d bytes\n",sizeof(floatType));
	printf("Size of double: %1d bytes\n",sizeof(floatType));
	printf("Size of char: %1d byte\n",sizeof(charType));
	return (0);
}
