#include <stdio.h>

int main()
{

float c, f;

printf("Enter temperature in Fahrenheit: ");
scanf("%f", &f);

//Formula 
c = (5.0 / 9.0) * (f - 32);

printf("%.2f Celsius  %.2f Fahrenheit \n", c,f);
return 0;

}
