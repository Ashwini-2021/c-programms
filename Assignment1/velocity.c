/*Convert velocity from km\r to m\sec*/
#include<stdio.h>
int main()
{
    float velkh,velms;
    printf("Enter velocity in km/hr:");
    scanf("%f",&velkh);

    velms=velkh*(float)5/18;

    printf("Velocity in m/sec= %f",velms);
    return 0;
}