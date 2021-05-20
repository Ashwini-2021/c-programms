/*2.	Accept n integers in array A. Pass this array and two counter variables to a function which will set first counter to total number 
of even values in array and the other to the total number of odd values. Display these counts in main.
(Hint: Pass the addresses of the counters to the function)*/
#include<stdio.h>
void countnum(int a[50],int,int*,int*);
int main()
{
    int arr[50],n,i;
    int even_count=0,odd_count=0;
    printf("how many elements you want to store in array:");
    scanf("%d",&n);
    printf("enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("elements in array are::");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    countnum(arr,n,&even_count,&odd_count);
    printf(" \n%d even numbers present in give array",even_count);
    printf("\n%d odd numbers present in given array",odd_count);
    return 0;
    }
    void countnum(int a[50],int n,int *ecount,int *ocount)
    {
        int i;
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                *ecount=*ecount+1;
            }
            else{
                *ocount=*ocount+1;
            }
        }
    }