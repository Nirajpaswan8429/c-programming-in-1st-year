//write a program  to check wheather the entered no is armstrong number or not

#include <stdio.h>
void main()
{
    int n , rem , t=0 , original;
    printf("enter the value of n:");
    scanf("%d",&n);
    original=n;
    while(n>0)
    {
        rem=n%10;
        t=t+rem*rem*rem;
        n=n/10;
    }
    if(t==original)
    {
        printf("it is a armstrong number");
    }
    else{
        printf("it is not a armstrong no");
    }
}