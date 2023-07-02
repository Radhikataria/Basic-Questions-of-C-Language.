#include<stdio.h>
int main()
{   int n,sum=0;
     printf("How many numbers?\n");
     scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+2*i;
    }
    printf("sum of first %d even natural numbers is %d",n,sum);

    return 0;
}

