#include<stdio.h>
int main()
{
    int a,b;
    printf("ENTER TWO NUMBERS:");
    scanf("%d %d",&a,&b);
    if(a>b)
    printf("GREATER NUMBER:%d",a);
    else if(b>a)
    printf("GREATER NUMBER:%d",b);
    else
    printf("NUMBERS ARE EQUAL");
    return 0;
}