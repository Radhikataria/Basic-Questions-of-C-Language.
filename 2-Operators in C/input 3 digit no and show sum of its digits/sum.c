#include<stdio.h>
int main()
{   int number,sum=0,rem=0;
    printf("Enter number");
    scanf("%d",&number);
      while(number)
     {
          rem=number%10;
          sum=sum+rem;
          number=number/10;
     }

      printf("%d",sum);


      return 0;

}
