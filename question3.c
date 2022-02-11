#include<stdio.h>
int main()
{
    int n;
    printf("ENTER A NUMBER:");
    scanf("%d",&n);
    switch (n%2)
    {
    case 0:
        printf("ITS AN EVEN NUMBER.");
        break;
    case 1:
    printf("ITS AN ODD NUMBER.");
    break;

    default:
    printf("ITS A WRONG CHOICE.");
    }
    return 0;
}