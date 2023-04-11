#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter the number whose sum of the digits needs to be calculated\n");
    scanf("%d",&num);
    int sum=0;
    int num2=num;
    while(num2!=0)
    {
        int dig=num2%10;
        sum=sum+dig;
        num2=num2/10;
    }
    printf("The sum of the digits of the given number %d is %d",num,sum);
}