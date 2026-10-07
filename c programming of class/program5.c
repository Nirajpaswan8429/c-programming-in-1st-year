//write a program to print a particular day of the week//

#include <stdio.h>
void main()
{ 
    int ch;
    printf("enter the choice ch:");
    scanf("%d", & ch);

    switch(ch)
    {
        case 1:
        printf("monday");
        break;
        case 2:
        printf("tuesday");
        break;
        case 3:
        printf("wednesday");
        break;
        case 4:
        printf("thusday");
        break;
        case 5:
        printf("friday");
        break;
        case 6:
        printf("saturday");
        break;
        case 7:
        printf("sunday");
        break;
        default:
        printf("invalid choice");
    }
}