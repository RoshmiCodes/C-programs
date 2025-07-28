#include <stdio.h>
#include <string.h>
struct Student
{
    char name[50];
    int age;
    float marks;
};
int main()
{
    struct Student s1;
    struct Student *ptr=&s1;
    printf("\nEnter name: ");
    scanf("%s",ptr->name);
    printf("\nEnter age: ");
    scanf("%d",&ptr->age);
    printf("\nEnter marks: ");
    scanf("%f",&ptr->marks);
    printf("\nStudent Details:");
    printf("\nName: %s",ptr->name);
    printf("\nAge: %d",ptr->age);
    printf("\nMarks: %.2f",ptr->marks);
    return 0;
}