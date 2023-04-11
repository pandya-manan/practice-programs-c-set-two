#include<stdio.h>
#include<conio.h>
int main()
{
    printf("Enter the number of terms of the fibonacci series to be printed\n");
    int n;
    scanf("%d",&n);
    int n1=0,n2=1,n3,i;
    printf("\n%d %d ",n1,n2);    
    for(i=2;i<n;i++)
    {
        n3=n1+n2;
        printf(" %d ",n3);
        n1=n2;
        n2=n3;
    }
    return 0;

}