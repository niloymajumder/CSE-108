#include <stdio.h>
int main()
{
	int num1, num2;
	printf("Enter the first integer number: ");
	scanf("%d", &num1);

	printf("Enter the second integer number: ");
	scanf("%d", &num2);

	int sum_int = num1 + num2;   // integer summation
	printf("Summation in integer: %d\n", sum_int);

	float sum_float = (float) num1 + (float) num2; // float summation
	printf("Summation in float: %.2f\n", sum_float);

	double sum_double = (double) num1 + (double) num2; //double summation
	printf("Summation in double: %.4lf\n", sum_double);

	return 0;	
}
