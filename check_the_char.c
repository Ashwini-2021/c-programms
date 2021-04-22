/*1.	 Write a program, which accepts a character from the user and checks if it is an alphabet,
 digit or punctuation symbol. If it is an alphabet, check if it is uppercase or lowercase and then 
 change the case.(Use Standard Library Functions) 
*/
#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch;
    printf("Enter any character::");
    scanf("%c",&ch);
    if(isalpha(ch))
    {
        printf("Entered character is alphabet.");
        if(isupper(ch))
        {
            printf("\nEntered alphabet is in upeercase.");
            ch=tolower(ch);
            printf("\ngiven alphabet in lowercase is %c",ch);
        }
        else{
             printf("\nEntered alphabet is in lowercase.");
             ch=toupper(ch);
             printf("\ngiven alphabet in uppercase is %c",ch);
        }
    }
    else if(isdigit(ch))
    {
        printf("Entered character is digit.");
    }
    else if(ispunct(ch))
    {
        printf("Entered character is punctuation symbol.");
    }
    else{
        printf("Invalid input!!");
    }
    return 0;
}
/*OUTPUT
Enter any character::G
Entered character is alphabet.   
Entered alphabet is in upeercase.
given alphabet in lowercase is g

Enter any character::x
Entered character is alphabet.
Entered alphabet is in lowercase.
given alphabet in uppercase is X

Enter any character::10
Entered character is digit.

Enter any character::?
Entered character is punctuation symbol.*/