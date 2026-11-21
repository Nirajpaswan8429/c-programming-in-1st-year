//write a program to enter 5 elements in a array and search a particular element  in this array(linear search)

#include <stdio.h>
void main()
{
    int  i , a[5] , s , f=0;
    printf("\nenter the element of the array:");
    for(i=0 ; i<5 ;i++)
    {
        scanf("%d" , &a[i]);
    }
    printf("\nenter the elemrnt u want to search:");
    scanf("%d" , &s);
    for(i=0 ; i<5 ; i++)
    {
        if(a[i]==s)
        {
            printf("element founded at position %d" ,i+1);
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("element not found");
    }
}