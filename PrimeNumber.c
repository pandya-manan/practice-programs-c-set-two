#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    printf("Enter the number which needs to be checked as prime number or not\n");
    scanf("%d",&num);
    int flag=0;
    int m=num/2;
    for(int i=2;i<m;i++)
    {
        if(num%i==0)
        {
            printf("Not prime");
            flag=1;
            break;

        }

        
    }
    if(flag==0)
    {
        printf("%d is a prime number",num);
    }
}