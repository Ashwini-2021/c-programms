/*7.	Write a program to merge two sorted arrays into a third array such that the third array is also in the 
sorted order.
a1	10	25	90					
a2	9	16	22	26	10			
a3	9	10	16	22	25	26	90	100 */
#include<stdio.h>
int main()
{
    int a[50],b[50],c[100];
    int i,j,k,m,n;
    printf("number of elements in 1st array::");
    scanf("%d",&n);
    printf("enter %d elements:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("elements in 1st array are::\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nnumber of elements in 2nd array::");
    scanf("%d",&m);
    printf("enter %d elements:",m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("elements in 2nd array are::\n");
    for(i=0;i<m;i++)
    {
        printf("%d\t",b[i]);
    }
   i=j=k=0; 
    while((i<n)&&(j<m))
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            k++;
            i++;
        }
         else{
             if(a[i]==b[j])
            { c[k]=a[i];
             k++;i++;
             c[k]=b[j];
             k++;j++;
             }
             else{
                 c[k]=b[j];
                 j++;k++;
             }
         }     
         
    }
    while(i<n)
    {
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<m)
    {
        c[k]=b[j];
        k++;
        j++;
     }
    printf("\nsorted array is::\n");
    for(i=0;i<m+n;i++)
    {
        printf("%d\t",c[i]);
    }
    return 0;
}