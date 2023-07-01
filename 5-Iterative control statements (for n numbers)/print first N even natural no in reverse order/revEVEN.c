#include<stdio.h>
int main()
{
    int n,i;
    printf("How many first even natural no to print in reverse order?\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        printf("%d ",2*i);
    }
    return 0;
}

