//question 1
#include<stdio.h>
int main()
{
    int reg_no;
    char name[20];
    char branch[20];
    char hobby[20];
    printf("ENTER YOUR NAME:");
    gets(name);
    printf("ENTER YOUR BRANCH:");
    gets(branch);
    printf("ENTER YOUR HOBBY:");
    gets(hobby);
    printf("ENTER YOUR REGISTRATION NUMBER:");
    scanf("%d",&reg_no);
    printf("\nNAME:");
    puts(name);
    printf("REGISTRATION NUMBER:%d",reg_no);
    printf("\nBRANCH:");
    puts(branch);
    printf("HOBBY:");
    puts(hobby);
    return 0;
}