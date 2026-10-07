//write a program to calculate the factorial of a number entered by the user //

#include <stdio.h> 
void main()
{
    int n;
    int fact=1;

    printf("enter the value of n:");
    scanf("%d", &n);

    for(int i=1 ; i<=n ; i++)
    {
        fact=fact*i;
        printf("\nfactorial=%d", fact);
    }
    ;

}