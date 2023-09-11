#include<stdio.h>
int main()
{
    int fnum,Snum,Tnum;
    printf("enter your first number");
    scanf("%d",&fnum);
    printf("enter your Second number");
    scanf("%d",&Snum);
    printf("enter your Third number");
    scanf("%d",&Tnum);
    
    if(fnum>Snum && fnum>Tnum)
    {
         printf("\n%d is greater",fnum);
    }
    else  if(fnum<Snum && Snum>Tnum)
    {
         printf("\n%d is greater",Snum);
    }
    else
    {
        printf("\n%d is greater",Tnum);
    }
    
    
    
    if(fnum<Snum && fnum<Tnum)
    {
         printf("\n%d is smaller",fnum);
    }
    else  if(fnum>Snum && Snum<Tnum)
    {
         printf("\n%d is smaller",Snum);
    }
    else
    {
        printf("\n%d is smaller",Tnum);
    }
    

    if(fnum>Snum && fnum<Tnum || fnum<Snum && fnum>Tnum )
    {
         printf("\n%d is middle number",fnum);
    }
    else  if(fnum>Snum && Snum<Tnum || fnum<Snum && Snum<Tnum)
    {
         printf("\n%d is middle number",Snum);
    }
    else
    {
        printf("\n%d is middle number",Tnum);
    }
    
    
    return 0;
    
}
