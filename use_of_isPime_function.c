/*3.	 Write a function isPrime, which accepts an integer as parameter and returns 1 if the number is 
prime and 0 otherwise. Use this function in main to display the n prime numbers.*/
#include<stdio.h>
int isPrime(int);
int main()
{   
    int number,x,i,y,d,p=2;
    printf("How many prime numbers you want:");
    scanf("%d",&number);
     printf("%d prime numbers are:",number);     
    while(number>0)
    { 
        y=isPrime(p);
      if(y==1)
        {
          printf("\t%d",p);
          number--;
        }
      p++;
    }      
 return 0;
}

int isPrime(int number)
{   
    int i,c=0;
    for(i=1;i<=number;i++)
    {   
         if(number%i==0)
         { 
             c++;
         }
    }
       if(c==2)
       {
          return 1;
       }
       else
       {
        return 0;
       }
}