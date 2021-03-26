/* Area  and circumference of circle*/
#include<stdio.h>
//#include <math.h>
//#define PI 3.14
int main() 
{
    float r, A,C;
    printf("Please enter the radius of circle:");
    scanf("%f", &r);
    A=(float)22/7*r*r;
    C=2*(float)22/7*r;
    printf("Area of circle is %f and circumference of circle is %f",A,C);
    return 0;
}


