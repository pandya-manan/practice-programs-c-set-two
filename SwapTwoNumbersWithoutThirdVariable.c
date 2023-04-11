#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter the first number\n");
    scanf("%d",&a);
    printf("Enter the second number\n");
    scanf("%d",&b);
    printf("\nBefore swapping the numbers %d %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping the numbers %d %d",a,b);

}