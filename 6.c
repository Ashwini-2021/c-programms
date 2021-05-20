/*6.	 Write a program to find the intersection of the two sets of integers.
 Store the intersection in another array.*/
 #include<stdio.h>
 int main()
 {
     int a[50],b[50],c[50],i,j,t,n,m;
     printf("how many nummbers you want to store in 1st array:");
     scanf("%d",&n);
     printf("enter elements::");
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     printf("elements in 1st array are:\n");
     for(i=0;i<n;i++)
     {
         printf("%d\t",a[i]);
     }
     printf("\nhow many nummbers you want to store in 2nd array:");
     scanf("%d",&m);
    
     printf("enter elements::");
     for(i=0;i<m;i++)
     {
         scanf("%d",&b[i]);
     }
     printf("elements in 2nd array are:\n");
     for(i=0;i<m;i++)
     {
         printf("%d\t",b[i]);
     }
     
     for(i=0;i<n;i++)
     {
         for(j=0;j<m;j++)
         {
              if(a[i]==b[j])
                {
                   c[t]=a[i];
                   t++;
                }
         }
     }
printf("\nIntersection of two arrays::\n");
for(i=0;i<t;i++)
{
    printf("%d\t",c[i]);
}
   return 0;
 }