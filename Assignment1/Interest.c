/*Simple interest and maturity amount*/
#include<stdio.h>
int main()
{
    float principle, rate_of_interest,time_period,interest,amount;

    printf("Enter principle rate, rate of interest,time period:");
    scanf("%f %f %f",&principle,&rate_of_interest,&time_period);

    interest=(principle*rate_of_interest*time_period)/100;
    amount=principle+interest;

    printf("Simple Interest=%f \n Maturity Amount=%f",interest,amount);
    return 0;
}