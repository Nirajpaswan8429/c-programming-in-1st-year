//write a program to print thje table of number entered by  user//

#include <stdio.h>
void main()
{
    int n , r ;

    printf("enter the value of n:");
    scanf("%d", & n);
    
    for(int i=1 ; i<=10 ; i++)
    {
        r=n*i;
        printf("%d*%d=%d\n" , n , i , n*i);
        
    }
     
    
}