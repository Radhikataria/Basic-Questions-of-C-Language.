#include<stdio.h>
int main()
{ int number,count=0;
 printf("Enter Number=\n");
 scanf("%d",&number);
 while(number)
 {
     count++;
     number=number/10;
 }
 printf("No of digits =%d",count);
 return 0;
}
