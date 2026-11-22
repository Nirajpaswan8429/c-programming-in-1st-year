#include <stdio.h>
struct student 
{
    int id;
    char name[10];
    float perc;
};
void main()
{
    struct student s1;
    printf("enter the details of student s1:\n");
    scanf("%d %s %f", &s1.id, s1.name, &s1.perc);
    struct student s2;
    printf("enter the details of student s2:\n");
    scanf("%d %s %f", &s2.id, s2.name, &s2.perc);

    printf("\ndetails of student s1\n");
    printf("\nstudent id=%d\nstudent name=%s\nstudent percentage=%f", s1.id, s1.name, s1.perc);
    printf("\n");
    printf("\ndetails of student s2\n");
    printf("\nstudent id=%d\nstudent name=%s\nstudent percentage=%f", s2.id, s2.name, s2.perc);
}