#include<stdio.h>
int main()
{
    int n;
    printf("How many natural no's to print in reverse order?\n");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        printf("%d ",i);
    }
    return 0;
}
