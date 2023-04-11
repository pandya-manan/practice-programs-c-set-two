#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char word[20];
    printf("Enter the first name\n");
    scanf("%s",word);
    int length=strlen(word);
    printf("The length of the first name is %d\n",length);

    printf("The first name converted into uppercase %s\n",strupr(word));
    

    printf("Enter the last name\n");
    char last_name[20];
    scanf("%s",last_name);

    printf("The full name of the person is %s",strcat(word,last_name));
}