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
	printf("size of int: %1d bytes\n",sizeof(integerType));
	printf("size of float: %1d bytes\n",sizeof(floatType));
	printf("size of double: %1d bytes\n",sizeof(doubleType));
	printf("size of char: %1d byte\n",sizeof(charType));
	return (0);
}
