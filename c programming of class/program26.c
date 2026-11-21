//write a program to enter 5 element in an array in an unshorted and then shorted (insertion short)//

#include <stdio.h> 
void main()
{
    int i , a[5] , j , temp;
    printf("enter the element:\n");
    for(i=0 ; i<5 ; i++)
    {
        scanf("%d" , &a[i]);
    
    }
    for(i=1 ; i<5 ; i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;

        }
        a[j+1]=temp;

    }
    printf("array in shorted manner\n ");
    for(i=0 ; i<5 ; i++)
    {
        printf("%d\t" , a[i]);
    }
}