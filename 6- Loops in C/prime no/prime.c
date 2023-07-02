#include<stdio.h>
int main()
{
    int number,i,flag=0;
    printf("Enter number=\n");
    scanf("%d",&number);
    for( i=2;i<=number/2;i++)
    {

         if(number%i==0)
          { printf("No,its not a PRIME number.");
            flag=1;
            break;
          }

    }
    if(number==1)
            printf("No,it is  not a PRIME number.");
   else if(flag==0)
            printf("Yes,its a PRIME number");


     return 0;
}
