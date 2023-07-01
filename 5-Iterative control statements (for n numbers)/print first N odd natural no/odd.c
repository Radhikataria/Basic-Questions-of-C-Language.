#include<stdio.h>
int main()
{
    int n;
    printf("How many first odd natural no's to print?\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
      printf("%d ",2*i+1);
    }
    return 0;
}
