#include<conio.h>
#include<stdio.h>
int calcArea(int l,int b);
int main()
{
    int l,b;
    printf("Enter the length of the rectangle\n");
    scanf("%d",&l);
    printf("Enter the breadth of the rectangle\n");
    scanf("%d",&b);
    int result=calcArea(l,b);
    printf("The area of the rectangle is %d",result);
}

int calcArea(int l,int b)
{
    return (l*b);
}