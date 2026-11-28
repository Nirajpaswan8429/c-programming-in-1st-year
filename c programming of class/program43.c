//write a program to perform swaping using pointer(call by reference)//

#include <stdio.h>
void main()
{
    int a , b , temp;
    int *p;
    int *q;
    printf("enter the nember a and b:\n");
    scanf("%d %d" , &a , &b);
    p=&a;
    q=&b;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("after swaping\n");
    printf("*p=%d\n*q=%d" ,*p ,*q);
}