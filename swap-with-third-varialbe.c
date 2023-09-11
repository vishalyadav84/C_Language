#include<stdio.h>
int main()
{
    int a=10,b=20,c;
    printf("enter your first number");
    scanf("%d",&a);
     printf("enter your second number");
   scanf("%d",&b);
    c=a;
    a=b;
    b=c;
     printf("afer swapping");
     printf("\n%d",a);
     printf("\n%d",b);
    return 0;
}
