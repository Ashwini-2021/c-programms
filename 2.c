/*2.	Create a structure employee (id, name, salary). Accept details of n employees and write a menu driven program
 to perform the following operations. Write separate functions for the different operations.
a)	Search by name
b)	Search by id
c)	Display all
d)	Display all employees having salary>2,00,000
e)	Display employee having maximum salary.*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct employee
{
    int id;
    char name[100];
    float salary;
}emp[50];
void Search_by_name(int n);
void Search_by_id(int n);
void Display_all(int n);
void Display_emp_gre_salary(int n);
void Display_emp_max_salary(int n);
int main()
{
    int i,n,choice;
    printf("how many numbers of employee detail you want to store::");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter employee id ::");
        scanf("%d",&emp[i].id);
        fflush(stdin);
        printf("\nEmployee name::");
        scanf("%s",emp[i].name);
        printf("\nEnter salary:: ");
        scanf("%f",&emp[i].salary);
    }
    printf("enter the number that operation you want to do \n1.Search by name \n2.Search by id  \n3.Display all \n 4.Display all employees having salary>2,00,000 \n5.Display employee having maximum salary.\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:Search_by_name(n);
        break;
        case 2:Search_by_id(n);
        break;
        case 3:Display_all(n);
        break;
        case 4:Display_emp_gre_salary(n);
        break;
        case 5:Display_emp_max_salary(n);
        break;
        default:printf("select correct option");
    }
    return 0;
}
void Search_by_name(int n)
{
    int i,c;
    char name[100];
    printf("Enter Employee name that you want to search::");
    scanf("%s",name);
    for(i=0;i<n;i++)
    {
        c=strcmp(name,emp[i].name);
        if(c==0)
        {
            printf("\nEmployee id :: %d",emp[i].id);
            printf("\nEmployee name :: %s",emp[i].name);
            printf("\nsalary :: %f",emp[i].salary);
        }
    }
}
void Search_by_id(int n)
{
    int i,id;
    printf("\nEnter employee id that you want to search::");
    scanf("%d",&id);
    for(i=0;i<n;i++)
    {
        if(id==emp[i].id)
        {
            printf("\nEmployee id :: %d",emp[i].id);
            printf("\nEmployee name :: %s",emp[i].name);
            printf("\nsalary :: %f",emp[i].salary); 
        }
    }

}
void Display_all(int n)
{
    int i;
    printf("%d employees details are::");
    for(i=0;i<n;i++)
    {
            printf("\nEmployee id :: %d",emp[i].id);
            printf("\nEmployee name :: %s",emp[i].name);
            printf("\nsalary :: %f",emp[i].salary);   
    }
}
void Display_emp_gre_salary(int n)
{
    int i;
    printf("employee details having salary greater than 200000:");
    for(i=0;i<n;i++)
    {
        if(emp[i].salary>200000)
        {
            printf("\nEmployee id :: %d",emp[i].id);
            printf("\nEmployee name :: %s",emp[i].name);
            printf("\nsalary :: %f",emp[i].salary);  
        }
    }
}
void Display_emp_max_salary(int n)
{
    int i,max=0;
    printf("\ndetails of employee having max salary is");
    for(i=0;i<n;i++)
    {
        if(emp[max].salary<emp[i].salary)
        {
            max=i;
        }
    }
            printf("\nEmployee id :: %d",emp[max].id);
            printf("\nEmployee name :: %s",emp[max].name);
            printf("\nsalary :: %f",emp[max].salary);  
}