/*7.	 Write a recursive function to calculate the nth Fibonacci number. Use this function in main to display the first n Fibonacci numbers.
 The recursive definition of nth Fibonacci number is as follows:
	fib(n) = 1	if n = 1 or 2
	          = fib(n-2) + fib(n-1)	if n>2
*/
#include<stdio.h>
int fib(int);
int main()
{
    int no,num;
    printf("How many terms of fibbonocci sequence you want::");
    scanf("%d",&no);
    printf("fibonocci ssequence of %d terms are::");
    num=fib(no);
    printf("%d\t",num);
    return 0;
}
int fib(int n)
{
    if((n==1)||(n==2))
    {
      return 1;
    }
    else{
        return fib(n-2)+fib(n-1);
    }

}
