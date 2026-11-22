//write a program to calculate size of structure and union . take same different data types.(hint:use sizeof operator)//

#include <stdio.h>
struct student
{
    int id ;
    char name[10];
    float perc;
};
union student_u
{
    int id;
    char name[10];
    float perc;

};
void main()
{
    struct student s1;
    union student_u u1;
    printf("enter the details of student s1:\n");
    scanf("%d %s %f" ,&s1.id , &s1.name , &s1.perc);
    printf("\nstudent details\n");
    printf("\nstudent id=%d\nstudent name=%s\nstudent percentage=%f\n" , s1.id , s1.name , s1.perc);
    printf("\n\n");
    
    printf("Size of structure=%zu bytes\n", sizeof(struct student));
   printf("Size of union=%zu bytes", sizeof(union student_u));
}