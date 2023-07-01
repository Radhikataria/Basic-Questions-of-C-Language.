#include<stdio.h>
int main()
{   int table;
    printf("Table name= ");
    scanf("%d",&table);
    for(int i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",table,i,i*table);
    }
    return 0;
}
