/*1.	Create a structure student (roll no, name, marks of 3 subjects, percentage). Accept details of n students 
and write a menu driven program to perform the following operations.Write separate functions for the different options.
i)	Search
ii)	Modify
iii)Display all student details 
iv)	Display all student having percentage>60
v)	Display student having maximum percentage*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
    int roll_no;
    char name[100];
    int m1,m2,m3;
    float percentage;
}detail[50];
void search(int);
void modify(int);
void display_all_stu_detail(int);
void display_stu_per(int);
void stu_with_max_per(int );
int main()
{
    int n,i,num;
    printf("how many students details you want to store: ");
    scanf("%d",&n);
    detail[n];
    printf("enter the details of %d students",n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter detail of student no.%d",i);
        printf("\nEnter roll_no:  ");
        scanf("%d",&detail[i].roll_no);
        fflush(stdin);
        printf("Enter name:: " );
        gets(detail[i].name);
        printf("Enter marks of M1,M2 and M3::  ");
        scanf("%d%d%d",&detail[i].m1,&detail[i].m2,&detail[i].m3);
        printf("Enter percentage:: ");
        scanf("%f",&detail[i].percentage);
     }

printf("use following options for given operation\n1.Search \n2.Modify \n3.Display all student details  \n4.Display all student having percentage>60 \n5.Display student having maximum percentage::\n");
     scanf("%d",&num);         
     switch(num)
     {
     case 1:search(n);
           break;
     case 2:modify(n);
            break;
     case 3:display_all_stu_detail(n);
            break;
     case 4:display_stu_per(n);
            break;
     case 5:stu_with_max_per(n);
            break;
    default:printf("Enter valid input");
     }
      return 0;
}
void search(int n)
{
    int i,c,roll_no;
    printf("\nEnter the roll no. of student for which you want to search:\n");
    scanf("%d",&roll_no);
    for(i=0;i<n;i++)
    {
     if(roll_no==detail[i].roll_no)
       {
            printf("\nroll no.=%d",detail[i].roll_no);
            printf("\nname=%s",detail[i].name);
            printf("\nmarks of m1=%d,m2=%d and m3=%d",detail[i].m1,detail[i].m2,detail[i].m3);
            printf("\npercentage=%f",detail[i].percentage);
        }
    }
}

void modify(int n)    
{
    int i,choice,roll_no,new_rn,c;
    char name[50],rename[50];
    printf("\nchoose the option that you want to change::\n1.roll_no\n2.name\n3.marks\n4.percentages::\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        {
        printf("\nEnter the roll no that you want to change::\n");
        scanf("%d",&roll_no);
        for ( i = 0; i<n; i++)
        {
            if(roll_no==detail[i].roll_no)
            {
                printf("\nEnter new roll no.  ");
                scanf("%d",&new_rn);
                detail[i].roll_no=new_rn;
                printf("modified details of student is::\n");
                printf("\nroll no.=%d",detail[i].roll_no);
                printf("\nname=%s",detail[i].name);
                printf("\nmarks of m1=%d,m2=%d and m3=%d",detail[i].m1,detail[i].m2,detail[i].m3);
                printf("\npercentage=%f",detail[i].percentage);
            }
        }
        }
        break;
        case 2:
        {
            printf("\nEnter the name that you want to change::\n");
            scanf("%s",name);
            for(i=0;i<n;i++)
            {
                 c=strcmp(name,detail[i].name);
                    if(c==0)
                    {
                        printf("Enter the new name::");
                        scanf("%s",rename);
                        strcpy(detail[i].name,rename);
                        printf("\nmodified details of student is::\n");
                        printf("\nroll no.=%d",detail[i].roll_no);
                        printf("\nname=%s",detail[i].name);
                        printf("\nmarks of m1=%d,m2=%d and m3=%d",detail[i].m1,detail[i].m2,detail[i].m3);
                        printf("\npercentage=%f",detail[i].percentage);
                    }
            }
        }
        break;
        case 3:
        {
            int m1,m2,m3;
            printf("\nEnter the student name for which you want to change the marks::\n");
            scanf("%s",name);
            for(i=0;i<n;i++)
            {
                c=strcmp(name,detail[i].name);
                if (c==0)
                {
                    printf("Enter new marks for m1,m2 and m3 respectively::\n");
                    scanf("%d%d%d",&m1,&m2,&m3);
                    detail[i].m1=m1;
                    detail[i].m2=m2;
                    detail[i].m3=m3;
                    printf("\nmodified details of student is::\n");
                    printf("\nroll no.=%d",detail[i].roll_no);
                        printf("\nname=%s",detail[i].name);
                        printf("\nmarks of m1=%d,m2=%d and m3=%d",detail[i].m1,detail[i].m2,detail[i].m3);
                        printf("\npercentage=%f",detail[i].percentage);
                }
                
            }
        }
        break;
        case 4:
        {
            float per;
            printf("\nEnter the roll number of student for which you want to change percentages::\n");
            scanf("%d",&roll_no);
            for(i=0;i<n;i++)
            {
                if(roll_no==detail[i].roll_no)
                {
                    printf("Enter the new percentages of student::\n");
                    scanf("%f",&per);
                    detail[i].percentage=per;
                     printf("\nmodified details of student is::\n");
                       printf("\nroll no.=%d",detail[i].roll_no);
                        printf("\nname=%s",detail[i].name);
                        printf("\nmarks of m1=%d,m2=%d and m3=%d",detail[i].m1,detail[i].m2,detail[i].m3);
                        printf("\npercentage=%f",detail[i].percentage);

                }
            }
        }
        break;
        default:printf("\nEnter valid input");
    }
}

void display_all_stu_detail(int n)
{
    printf("\ndisplaying details of all students");
    int i;
    for(i=0;i<n;i++)
    {
            printf("\nroll no.=%d",detail[i].roll_no);
            printf("\nname=%s",detail[i].name);
            printf("\nmarks of m1=%d,m2=%d and m3=%d",detail[i].m1,detail[i].m2,detail[i].m3);
            printf("\npercentage=%f",detail[i].percentage);
    }
}

void display_stu_per(int n)
{
    int i;
    printf("students details having percentages greater than 60\n");
    for(i=0;i<n;i++)
    {
        if(detail[i].percentage>60)
        {
            printf("\nroll no.=%d",detail[i].roll_no);
            printf("\nname=%s",detail[i].name);
            printf("\nmarks of m1=%d,m2=%d and m3=%d",detail[i].m1,detail[i].m2,detail[i].m3);
            printf("\npercentage=%f",detail[i].percentage);

        }
    }
} 

 void stu_with_max_per(int n)
 {
       printf("student details having maximum percentage is::\n");
    int i;
    int max=0;
    for(i=0;i<n;i++)
    {   
        if(detail[max].percentage<detail[i].percentage)
        {
            max=i;
        }
    }
printf("\nroll_no:: %d",detail[max].roll_no);
printf("\nstudent name:: %s",detail[max].name);
printf("\nmarks of three subjects m1=%d,m2=%d and m3=%d",detail[max].m1,detail[max].m2,detail[max].m3);
printf("\npercentage:: %f",detail[max].percentage);
 }
