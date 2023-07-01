#include<stdio.h>
int main()
{
    int n,i;
    printf("How many first even natural no to print?\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d ",2*i+2);
    }
    return 0;
}
