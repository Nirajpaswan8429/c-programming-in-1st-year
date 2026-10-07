//write a program to perform ariyhmetic operation like +,-,*,/ and %//

#include <stdio.h>
void main()
{ int a , b, add ,sub , mul , div , mod , ch;
    printf("enter the value of a & b:");
    scanf("%d %d", &a ,&b);
    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch(ch)
    { 
        case 1:
        add = a+b;
        printf("add=%d" ,add);
        break;
        case 2:
        sub = a-b;
        printf("sub=%d", sub);
        break;
        case 3:
        mul = a*b;
        printf("mul=%d", mul);
        break;
        case 4:
        div = a/b;
        printf("div=%d", div);
        break;
        case 5:
        mod = a%b;
        printf("mod=%d", mod);
        break;
        default:
        printf("invalid choice");
    }


}