#include <stdio.h>

int main()
{
   int Fnumber,Snumber,sum,sub,mul,div;
   printf("enter your First number");
   scanf("%d",&Fnumber);
    printf("enter your Second number");
   scanf("%d",&Snumber);
   sum=Fnumber+Snumber;
    sub=Fnumber-Snumber;
     mul=Fnumber*Snumber;
      div=Fnumber/Snumber;
       printf("\nthe sum of two numbers is ");
        printf("\n%d ",sum);
         printf("\nthe sub of two numbers is ");
          printf("\n%d ",sub);
           printf("\nthe mul of two numbers is ");
            printf("\n%d",mul);
             printf("\nthe div of two numbers is ");
              printf("\n%d ",div);
    return 0;
}

