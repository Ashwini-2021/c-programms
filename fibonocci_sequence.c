/*3.	Write a program to display first n Fibonacci numbers (1, 1, 2, 3, 5, 7, ….)*/
#include<stdio.h>
int main()
{
    int number,i,no=1,temp,ino;
    printf("How many terms of fibonacci sequence you want:");
    scanf("%d",&number);
    printf("\nfibonocci sequence upto %d terms are:\n",number);
    for(i=0;i<=number;i++)
    {
      
      printf("%d\t",no);//1,1,2,3
      temp=no+ino;//temp=1,2,3
      ino=no;//ino=no=1,1,2
      no=temp;//no=1=temp=1,2,3
      temp=ino;//temp=1=ino=1,1,2

    }  
    return 0;
}
/*OUTPUT
How many terms of fibonacci sequence you want:10

fibonocci sequence upto 10 terms are:
1       1       2       3       5       8       13      21      34      55      89*/