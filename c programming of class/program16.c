//write a program to calculate the sum of the numbers. in this program you will enter the numbers one by one. the program will give you the answer when the user enters 0, i.e., when the zero is entered by the user, the result will be printed on the screen.
#include <stdio.h> 
void main ()
{
  int n , sum=0;
  printf("enter the number (press 0 to add the number ):");
  scanf("%d", &n);
  while(n!=0)
  {
  sum=sum+n;
  scanf("%d" , &n);
  }
  printf("sum of the numbers=%d" , sum);
}


