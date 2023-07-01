#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    printf("Enter String = ");
    scanf("%s",&a);
    printf("Length of string is %d",strlen(a));

    /* Another way  using printf().
    int x;
    x=printf("abc");
    printf("\nlength is %d",x);
   */
    return 0;
}
