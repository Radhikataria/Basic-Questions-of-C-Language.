#include<stdio.h>
int main()
{  int a,b;
printf("enter values= ");
scanf("%d %d",&a,&b);
printf("initial values:>a=%d,b=%d",a,b);
b=a+b;
a=b-a;
b=b-a;
printf("\n swapping values are:>a=%d,b=%d",a,b);
return 0;
}
