#include<stdio.h>
int main()
{
    int number;
    printf("Enter three digit number=");
    scanf("%d",&number);
    number=number%10*100+number/10;
    printf("%d",number);
    return 0;
}
