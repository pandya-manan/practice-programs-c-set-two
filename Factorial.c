#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter the number whose factorial needs to be calculated\n");
    scanf("%d",&num);
    int prod=1;
    for(int i=1;i<=num;i++)
    {
        prod=prod*i;
    }
    printf("The factorial of the number is %d",prod);
}