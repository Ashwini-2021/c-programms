/*5.	Write a program to display the multiplication tables from __to __ having n multiples each. 
The output should be display in tabular format. Ex. Multiplication table of 2 to 9 having 10 multiples of each.
2x 1=2		3x1=3……………………………………………………………..9x1=9
2x2=4		3x2=6……………………………………………………………..9x2=18
.			.						.
.			.						.
2x10=20	3x10=30…………………………………………………………..9x10=90  
*/
#include<stdio.h>
int main()
{
    int number1,number2,no,ino,n;
    printf("Enter the number for which you want multiplication table:");
    scanf("%d",&number1);
    printf("upto:");
    scanf("%d",&number2);
    for(ino=1;ino<=10;ino++)
    {//  n=number1;
        for(n=number1;n<=number2;n++)//do
        {   no=n*ino;
            printf("%dx%d=%d\t",n,ino,no);
           // printf("\n");
           // n++;
        }
        //while(n<=number2);
    }
    return 0;
}
/*OUTPUT
enter the number for which you want multiplication table:2
upto:9
2x1=2   3x1=3   4x1=4   5x1=5   6x1=6   7x1=7   8x1=8   9x1=9   2x2=4   3x2=6   4x2=8   5x2=10  6x2=12  7x2=14  8x2=16  9x2=18  2x3=6 3x3=9    4x3=12  5x3=15  6x3=18  7x3=21  8x3=24  9x3=27  2x4=8   3x4=12  4x4=16  5x4=20  6x4=24  7x4=28  8x4=32  9x4=36  2x5=10  3x5=15 
4x5=20  5x5=25  6x5=30  7x5=35  8x5=40  9x5=45  2x6=12  3x6=18  4x6=24  5x6=30  6x6=36  7x6=42  8x6=48  9x6=54  2x7=14  3x7=21  4x7=28 
5x7=35  6x7=42  7x7=49  8x7=56  9x7=63  2x8=16  3x8=24  4x8=32  5x8=40  6x8=48  7x8=56  8x8=64  9x8=72  2x9=18  3x9=27  4x9=36  5x9=45 
6x9=54  7x9=63  8x9=72  9x9=81  2x10=20 3x10=30 4x10=40 5x10=50 6x10=60 7x10=70 8x10=80 9x10=90*/