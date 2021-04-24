//show that two numbers are equal without using equality operator(we are going to use bitwise operator)
#include<stdio.h>
int main()
{
    int A=30,B=30;
    if(!(A^B))
    {
        printf("two numbers are equal");
    }
    else
    {
        printf("two numbers are not equal");
    }
  return 0;
}