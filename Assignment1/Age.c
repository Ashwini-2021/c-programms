//convert age into equivalent number of seconds.
#include<stdio.h>
#include<math.h>
int main()
{
    float age, age_in_sec;
    printf("Enter your age in years::");
    scanf("%f",&age);

    age_in_sec=3.156*pow(10,7)*age;

    printf("Your equivalent age in seconds is %f",age_in_sec);
}