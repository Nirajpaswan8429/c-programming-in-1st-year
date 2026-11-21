//write aprogram to enter 3 digit number and calculate sum of its digits


#include <stdio.h>
void main()
{
   int n , rem , sum =0 , temp;
   printf("enter 3 digit number:");
   scanf("%d" , &n);
   while(n>0)
   {
    rem= n%10;
    sum = sum+rem;
    n=n/10;
   } 
   printf("sum of digits=%d" , sum);
}