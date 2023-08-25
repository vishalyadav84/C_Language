#include <stdio.h>
void main()
{
    int a, b, c;
    printf("enter the value of a,b and c:");
    scanf("%d %d %d\n", &a, &b, &c);
    if (a > b && a > c)
    {
        if (b >= c)
        {
            printf("b is the second largest no");
        }
        else
        {
            printf("c is the second largest no");
        }
    }
    if (b > a && b > c)
    {
        if (a >= c)
        {
            printf("a is the second largest no");
        }
        else
        {
            printf("c is the second largest no");
        }
    }
    if (c > a && c > b)
    {
        if (b >= a)
        {
            printf("b is the second largest no");
        }
        else
        {
            printf("a is the second largest no");
        }
    }
}