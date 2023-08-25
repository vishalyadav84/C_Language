#include <stdio.h>
void main()
{
    int n1, n2;
    // swapping without using third variable
    printf("enter the value of n1 and n2:");
    scanf("%d %d \n", &n1, &n2);
    printf("before swapping the values are: %d %d\n", n1, n2);
    n1 = n2 + n1;
    n2 = n1 - n2;
    n1 = n1 - n2;
    printf("after swapping the values are: %d %d\n", n1, n2);
    // swapping with using third variable
    int temp;
    printf("before swapping the values are: %d %d\n", n1, n2);
    temp = n1;
    n1 = n2;
    n2 = temp;
    printf("after swapping the values are: %d %d\n", n1, n2);
}