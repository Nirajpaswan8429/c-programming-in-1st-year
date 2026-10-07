//write aprogram to print fibonacci series upto n terms //


#include <stdio.h>
void main()
{
    int a=0 , b=1 , c , n , i;
    printf("enter the value of n:");
    scanf("%d", &n);

    
    printf("\nfibonacci series:");
    
    for(i=0 ; i<n ; i++)
    {
        printf("%d " , c);
        a = b;
        b = c;
        c = a + b;
    }
}