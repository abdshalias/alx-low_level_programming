#include<stdio.h>
/**
 * main - prints datatype sizes
 *
 * Return: Always 0(Success)
 */
int main(void)
{
       /* Define data types */
	char char_Data;
	int int_Data;
	long longInt_Data;
	long long longlongInt _Data;
	float float_Data;

	/*Evaluate datasizes, and print to screen*/
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of a int: %u byte(s)\n", sizeof(int));
	printf("Size of a long int: %u byte(s)\n", sizeof(long int));
	printf("Size of a long int int: %u byte(s)\n", sizeof(long long int));
	printf("Size of a float: %u byte(s)\n", sizeof(float));

	return (0);
}
