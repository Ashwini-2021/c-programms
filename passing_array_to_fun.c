#include<stdio.h>
int pass_array(int a[]);
int main()
{
    int a[]={1,2,3,4,5};
    int b,i;
    printf("inside main\n");
    pass_array(a);
    return 0;
}
int pass_array(int a[])
{
    int i;
      printf("inside function\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
}