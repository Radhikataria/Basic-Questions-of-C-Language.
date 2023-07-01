#include<stdio.h>
int main()
{
    int number,a;
    printf("Enter number=");
    scanf("%d",&number);
    printf("Enter number to append=");
    scanf("%d",&a);
    number=number*10;
    number=number+a;
    printf("%d",number);
    return 0;

}
