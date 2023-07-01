#include<stdio.h>
int main()
{
int a,b,temp;
printf("Enter values of variables=");
scanf("%d %d",&a,&b);
printf("\n initial value of a =%d and b=%d",a,b);
temp=a;
a=b;
b=temp;
printf("\nSwapping values are:- a=%d and b=%d",a,b);
return 0;
}


