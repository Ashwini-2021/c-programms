/*6.	Write a recursive C function to calculate the GCD of two numbers. Use this function in main. 

The GCD is calculated as :

	gcd(a,b) = a	if b = 0

	  			=gcd (b, a mod b) otherwise 
*/
#include<stdio.h>
int gcd_of_two_num(int,int);
int main()
{
    int num1,num2,gcd;
    printf("Enter two number::");
    scanf("%d%d",&num1,&num2);
    gcd=gcd_of_two_num(num1,num2);
    printf("gcd of %d and %d is %d",num1,num2,gcd);
    return 0;
}
int gcd_of_two_num(int num1,int num2)
{
   if(num2!=0)
    {
        gcd_of_two_num(num2,num1%num2);
    }
    else
    return num1;
}