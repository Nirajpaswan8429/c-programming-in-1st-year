//write a program to check whether a number is even or odd //


#include <stdio.h>
void main()
{
    int i;
    printf("enter the value of i:");
    scanf("%d" , & i);

    if (i%2==0)
    {
        printf("%d is even number",i);
    }
    else
    {
        printf("%d is odd number",i);
 
    }
}