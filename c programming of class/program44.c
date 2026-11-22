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
    printf("enter the details of the student:");
    scanf("%d  %s  %f" , &s1.id , &s1.name , &s1.perc);
    printf("\ndetails of student\n");
    printf("\nstudent id=%d\nstudent name=%s\nstudent percentage=%f" ,s1.id ,s1.name ,s1.perc);
}