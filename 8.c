# include <stdio.h>
int main()
{    int a ;
    printf("Enter the Value");
    scanf("%d", &a);
    printf("Value in Meter %f \n",a/100);
    printf("Value in KiloMeter %f",a/100000);
    return 0;
}