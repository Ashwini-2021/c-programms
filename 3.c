/*3.	Write a program to accept details of n students (roll no, name, percentage) and write it to a file 
named “student.txt”. Accept a roll number from user and search the student in file. Also display the student details
 having the highest percentage.*/
 #include<stdio.h>
 struct student{
     int roll_no;
     char name[100];
     float percentage;
 }students[100];
 int main()
 {
     int n,i;
     int rn,max;
     printf("how many students data you want to store::");
     scanf("%d",&n);
     students[n];
     printf("\nEnter data for student::\n");
     for(i=0;i<n;i++)
     {
         printf("Enter roll no::  ");
         scanf("%d",&students[i].roll_no);
         fflush(stdin);
         printf("Enter name::  ");
         gets(students[i].name);
         printf("Enter percentages::  ");
         scanf("%f",&students[i].percentage);
     }
     printf("Enter the roll number of student for search::  ");
     scanf("%d",&rn);
     for(i=0;i<n;i++)
     {
     if(students[i].roll_no==rn)
     {
        printf("roll_no= %d",students[i].roll_no);
        printf("\nstudent name:: %s",students[i].name);
        printf("\npercentages:: %f",students[i].percentage); 
     }
     }
     printf("student having maximum percentages is:");
     for(i=0;i<n;i++)
     {
         
         if(students[max].percentage<students[i].percentage)
         {
             max=i;
        
         }
     }
        printf("roll_no= %d",students[max].roll_no);
        printf("\nstudent name:: %s",students[max].name);
        printf("\npercentages:: %f",students[max].percentage);    
    
         return 0;
 }