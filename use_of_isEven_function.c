/*2.	Write a function isEven, which accepts an integer as parameter and returns 1 if the number is even, 
and 0 otherwise.Use this function in main to accept n numbers and check if they are even or odd.*/
#include<stdio.h>
int isEven(int);
int main()
{
    int number,x,n,i;
    printf("how many numbers you want to check::");
    scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       printf("enter a number::");
       scanf("%d",&number);
        x=isEven(number);
    if(x==1)
    {
        printf("%d is even\n",number);
    }
    else{
        printf("%d is odd number\n",number);
    }
   }
    return 0;
}
int isEven(int number)
{
    if(number%2==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}
