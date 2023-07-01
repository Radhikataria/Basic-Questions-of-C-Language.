#include<stdio.h>
int main()
{
    int number;
    printf("Enter number=");
    scanf("%d",&number);
    printf(" Unit digit of entered number is %d",number%10);

    return 0;
}
