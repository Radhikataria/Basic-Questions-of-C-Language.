#include<stdio.h>
int main()
{
    int number,count=0,result;
    printf("Enter number=");
    scanf("%d",&number);
    while(number)
    { result=number&1;
        count++;
        if(result==1)
        {
            printf("First one found in %d position from right.",count);
            break;
        }
        number=number>>1;
    }
    return 0;
}
