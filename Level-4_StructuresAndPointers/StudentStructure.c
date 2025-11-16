#include <stdio.h>
typedef struct Student
{
    char name[50];
    int rollno;
    int marks[4];
    int tot_marks;
}ST;
int main()
{
    ST a[10];
    int i,j,max,index=0;
    for(i=0;i<10;i++)
    {
        a[i].tot_marks = 0;
        printf("\nStudent %d:",i+1);
        printf("\nName: ");
        scanf(" %[^\n]",a[i].name);
        printf("Roll No.: ");
        scanf("%d",&a[i].rollno);
        for(j=0;j<4;j++)
        {
            printf("Marks for Subject %d: ",j+1);
            scanf("%d",&a[i].marks[j]);
            a[i].tot_marks+=a[i].marks[j];
        }
        printf("\n------------------------");
    }
    max=a[0].tot_marks;
    for(i=1;i<10;i++)
    {
        if (a[i].tot_marks>max)
        {
            max=a[i].tot_marks;
            index=i;
        }
    }
    printf("\n%s whose roll no. is %d has secured the highest marks(%d).",a[index].name,a[index].rollno,a[index].tot_marks);
    return 0;
}