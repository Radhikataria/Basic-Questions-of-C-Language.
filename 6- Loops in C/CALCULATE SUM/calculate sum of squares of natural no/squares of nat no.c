#include<stdio.h>
int main()
{   int n,sum=0;
     printf("How many numbers?\n");
     scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i*i;
    }
    printf("sum of squares of first %d natural numbers is %d",n,sum);

    return 0;
}

