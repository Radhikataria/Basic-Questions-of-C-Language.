#include<stdio.h>
int main()
{
    int n;
    printf("How many first odd natural no's to print in reverse order?\n");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
      printf("%d ",2*i-1);
    }
    return 0;
}

