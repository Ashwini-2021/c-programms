/*4.	Write a program which accepts a number and check whether It is palindrome or not.
(Hint: number=reverse number).*/
#include<stdio.h>
int main()
{
    int number,r,reverseno=0,N;
    printf("Enter any number::");
    scanf("%d",&number);
    N=number;
    while(N>0)
    {
        r=N%10;
        reverseno=reverseno*10+r;
        N=N/10;
    }
    if(number==reverseno)
       {
        printf("Entered number is pallindrome.");
       }
    else 
       {
        printf("Entered number is  not pallindrome.");
       }
    return 0;
}