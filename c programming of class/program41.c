//write a program to calculate factorial of number using function//

#include <stdio.h>
int fact(int n);
void main()
{
    int n , c;
    printf("enter the value of n:");
    scanf("%d" , &n);
    c=fact(n);
    printf("%d" , c);
}
int fact(int n)
{
    int fact=1 , i , c;
    for(i=1 ; i<=n ; i++)
    {
        fact=fact*i;
            
    }
    c=fact;
    return c;
}