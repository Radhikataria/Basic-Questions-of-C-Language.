#include<stdio.h>
int main()
{
    int n,i;
    printf("How many first N natural no to square?\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",i*i);
    }
    return 0;
}
