#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter the number to check if it is an Armstrong number or not\n");
    scanf("%d",&num);
    int sum=0;
    int num2=num;
    while(num2!=0)
    {
        int dig=num2%10;
        sum=sum+(dig*dig*dig);
        num2/=10;
    }
    
    if(sum==num)
    {
        printf("The given number %d is an armstrong number",num);
    }
    else
    {
        printf("The given number %d is not an armstrong number",num);
    }
}