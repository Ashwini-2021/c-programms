/*2.	write a program which accepts integer and check if it is prime or not.*/
#include<stdio.h>
int main()
{
    int number,i;
    printf("Enter the number:");
    scanf("%d",&number);
    if(number==2)
    {
    printf("%d is prime",number);
    }
     else if(number<=1)
    {
        printf("%d is not prime",number);
    }
    for(i=2;i<number;i++)
    {
        if(number%i==0)
            {
              printf("%d is not prime.",number);
              break;
            }
        else{
             printf("%d is prime",number);
             break;
            }
    }
     return 0;
    }
    /*OUTPUT
    Enter the number:53
    53 is prime
    Enter the number:4
    4 is not prime.*/