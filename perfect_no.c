/*6.	Display perfect numbers below 500. (A perfect number is number 
such that sum of its factors is equal to the number itself. Ex. 6 (1+2+3) 28 (1+2+4+7+14).*/
#include<stdio.h>
int main()
{
    int number,i,no1=0;
    printf("check the given number is perfect or not:");
    printf("\nEnter the number that you want to check:");
    scanf("%d",&number);
    for(i=1;i<number;++i)
    {
        while(number%i==0)
        {   printf("i=%d\t",i);
            no1=no1+i;//1,3,6
            break;
        }
    }
      printf("no1=%d\t",no1);
      
    if(no1==number)
     {
       printf("\n%d is perfect number.",number);
     }
    else{
        printf("\n%d is not a perfect number.",number);
     }
return 0;
}
/*OUTPUT
Enter the number that you want to check:6
i=1     no1=1   i=2     no1=3   i=3     no1=6
6 is perfect number.
Enter the number that you want to check:25
i=1     no1=1   i=5     no1=6
25 is not a perfect number.
*/