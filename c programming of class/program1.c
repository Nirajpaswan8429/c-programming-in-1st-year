// write a programm to in c language to find greatest no among three number//
#include <stdio.h>
void main()
{ int a , b , c;
    printf("enter the value of a & b & c:");
    scanf("%d %d %d" , &a , &b , &c);

    if (a>b && b>c)
    {
        printf("%d is the greatest value ",a);
    }
    else if (b>a && b>c)
    {
        printf("%d is the greatest value",b);
    }
    else
    {
        printf("%d is the greatest value",c);
    }

}