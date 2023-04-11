#include<stdio.h>
#include<conio.h>
int main()
{
    int num,num2,reverse=0;
    printf("Enter the number which needs to be reversed\n");
    scanf("%d",&num);
    num2=num;
    while(num2!=0)
    {
        int dig=num2%10;
        reverse=(reverse*10)+dig;
        num2/=10;
    }
    printf("The reverse of the given number %d is %d",num,reverse);
}