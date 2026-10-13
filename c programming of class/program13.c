//wirte the program to find wheather the entered number is palandrome number while using while loop //

#include <stdio.h>
void main()
{
    int  n , r=0 , temp;
    printf("enter the value of n:");
    scanf("%d" , &n);

    temp=n;
    while(temp>0)
    {
        
        r=r*10 + (temp%10);
        temp=temp/10;
    }
    if(n==r)
    {
        printf("it is palendrome number");
    }
    else{
        printf("it in not palendrome number");
    }


}