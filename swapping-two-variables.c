#include<stdio.h>
int main()
{
    int a,b;
    printf("enter your first number");
    scanf("%d",&a);
     printf("enter your second number");
   scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
     printf("afer swapping");
     printf("\n%d",a);
     printf("\n%d",b);
    return 0;
}
