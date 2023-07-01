#include<stdio.h>
int main()
{
    int n;
    printf("How many natural no's to print?\n ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
    return 0;
}
