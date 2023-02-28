// Write a program to print the corresponding Celsisus to Fahrenheit 

#include <stdio.h>

int main()
{
	float celsius, fahrenheit;
	
	printf("Enter temperature in Celsius: ");
	scanf("%f", &celsius);

	//formula to convert celsius to fahrenheit 
	fahrenheit = (celsius * 9.0 / 5.0) + 32;
	
	printf("%.2f Celsius = %.2f Fahrenheit \n", celsius, fahrenheit);
	return 0;
}
