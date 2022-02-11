#include<stdio.h>
int main()
{
    float r,d,c;
    double a;
    printf("ENTER THE RADIUS OF THE CIRCLE:");
    scanf("%f",&r);
    d=2*r;
    c=2*3.14*r;
    a=3.14*r*r;
    printf("DIAMETER OF THE CIRCLE:%f",d);
    printf("\nCIRCUMFERENCE OF THE CIRCLE:%f",c);
    printf("\nAREA OF THE CIRCLE:%f",a);
    return 0;
}