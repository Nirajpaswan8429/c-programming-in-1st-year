 //writee a programm to enter the age of citizen and find whether he/she is eligible for voting or not //
 #include <stdio.h>
 void main ()

 { int age;

    printf("enter the the age of the person age :");
    scanf("%d", &age);
    if(age>=18)
    {
    printf("you are eligible for the vote");
    }
    else
    {
    printf("you are not eligible  for the voting");
    }
}