// To find a velocity of  the object after time t
#include<stdio.h>
int main()
{
    float invelocity, acceleration,time,velocity;
    printf("Enter the velocity and acceleration of object in SI unit:");
    scanf("%f   %f",&invelocity,&acceleration);

    printf("\nEnter a time after which we want to calculate velocity:");
    scanf("%f",&time);

    velocity=invelocity+acceleration*time;
    printf("\nValue of velocity is %f",velocity);
    return 0;

}
