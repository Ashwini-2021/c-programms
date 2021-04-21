/*1.	write a program which accepts a number n and display each digit in word.  
(Hint : Reverse the number and use switch statement.)
Ex. Number=6702 Output : Six Seven Zero Two
*/
#include<stdio.h>
int main()
{
    int number,d,r,sum=0,rem,N;
    printf("Enter any number::");
    scanf("%d",&number);
      
   while(number>0)
   {   
      r=number%10;
      sum=sum*10+r;
      number=number/10;
   }   
   N=sum;
   while(N>0)
   { 
      rem=N%10;

     switch(rem)
      {
          case 1:
          printf("ONE ");
          break;
          case 2:
          printf("TWO ");
          break;
          case 3:
          printf("THREE ");
          break;
          case 4:
          printf("FOUR ");
          break;
          case 5:
          printf("FIVE ");
          break;
          case 6:
          printf("SIX ");
          break;
          case 7:
          printf("SEVEN ");
          break;
          case 8:
          printf("EIGHT ");
          break;
          case 9:
          printf("NINE ");
          break;
         default:
          printf("ZERO ");
          break;
        }
        N=N/10;
     }  
return 0;
}