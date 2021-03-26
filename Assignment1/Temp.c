/*Convert a given temperature from fahrenheit to celsius*/
#include<stdio.h>
#include<math.h>
int main()
{   
    float f,C;
    printf("Enter the temperature in fahrenheit f:");
    scanf("%f",&f);
    
    C=(float)5/9*(f-32);

    printf("Temperature in celsius C: %f",C);
    return 0;
}