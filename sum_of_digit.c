/*4.	Write a recursive C function to calculate the sum of digits of a number. Use this function in main to 
accept a number and print sum of its digits. */
#include<stdio.h>
int sum_of_digit(int number);
int main()
{
    int number,sum;
    printf("Enter any number::");
    scanf("%d",&number);
    sum=sum_of_digit(number);
    printf("%d is sum of digit of number %d.",sum,number);
    return 0;
}
int sum_of_digit(int number)
{
    int r,sum=0;
    while(number>0)
    {
    r=number%10;
    sum=sum+r;
    number=number/10;
    }
    return sum;  
}