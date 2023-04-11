#include<stdio.h>
#include<conio.h>
int max(int nums[]);
int main()
{
    int nums[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter the number for index %d\n",i);
        scanf("%d",&(nums[i]));

    }
    int maximum=max(nums);
    printf("The maximum element in the array is %d",maximum);

}

int max(int nums[])
{
    int max=nums[0];
    for(int i=0;i<5;i++)
    {
        if(nums[i]>max)
        {
            max=nums[i];
        }
    }
    return max;
}