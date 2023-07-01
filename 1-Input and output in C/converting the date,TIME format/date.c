#include<stdio.h>

int main()
{
    printf("Enter Date in the given format:DD/MM/YYYY\n");
    int day, month, year ;
    scanf("%d/%d/%d",&day,&month,&year);
    printf("Day - %d,Month - %d,Year - %d",day,month,year);
    return 0;
}
