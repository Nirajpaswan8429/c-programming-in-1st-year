//write a program to print the sum of numbers from 0 to 20//

#include <stdio.h>
void main()
{  int sum=0;

    for(int i=0 ; i<20 ; i++)
    {
        sum=sum+i;

    }
    printf("sum=%d" , sum);
}