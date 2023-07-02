#include<stdio.h>
int main()
{
    int number,rem,reverse=0;
    printf("Enter Number=\n");
    scanf("%d",&number);
    while(number)
    {   rem=number%10;
        number=number/10;
        reverse=reverse*10+rem;
    }
        printf("%d",reverse);

    return 0;
}
