//wirte the program to find wheather the entered number is palandrome number while using while loop //

#include <stdio.h> 
void main()
{
    int a , r=0 , temp;
    printf("enter the value of a;");
    scanf("%d", &a);
    temp=a;
    while(temp>0)
    {
        r=r*10;
        r=r+(temp%10);
        temp=temp/10;
    }
    if (a==r)
    {
        printf("it is palandrome number");
    }
    else
    {
        printf(" it is not palandrome number");

    }
}