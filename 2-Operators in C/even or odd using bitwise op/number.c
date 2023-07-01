#include<stdio.h>
int main()
{
    int number;
    printf("Enter Number=");
    scanf("%d",&number);
    int result=number&1;
    if(result==0)
        printf("This is an even number.");
    else
        printf("This is an odd nunber");
    return 0;
}
