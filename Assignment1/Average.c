/*Average of three numbers*/
#include<stdio.h>
int main()
{
    float a,b,c,average;
    printf("Enter any three numbers:");
    scanf("%f %f %f",&a,&b,&c);

    average=(a+b+c)/3;
    printf("Average of three number is %f",average);
    return 0;
}