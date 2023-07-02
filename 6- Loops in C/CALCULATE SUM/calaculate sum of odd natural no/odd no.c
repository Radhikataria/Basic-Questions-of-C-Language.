#include<stdio.h>
int main()
{   int n,sum=0;
     printf("How many numbers?\n");
     scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        sum=sum+(2*i+1);
    }
    printf("sum of first %d odd natural numbers is %d",n,sum);

    return 0;
}

