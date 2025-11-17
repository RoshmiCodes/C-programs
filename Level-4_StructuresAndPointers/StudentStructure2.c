#include <stdio.h>
typedef struct Student
{
    char name[50];
    int roll;
    int marks[3];
    int total;
    int avg;
}ST;
int main()
{
    ST a[10];
    int i,j,max,min,index1=0,index2=0;
    float average;
    for(i=0;i<10;i++)
    {
        a[i].total = 0;
        printf("\nStudent %d:",i+1);
        printf("\nName: ");
        scanf(" %[^\n]",a[i].name);
        printf("Roll No.: ");
        scanf("%d",&a[i].roll);
        for(j=0;j<3;j++)
        {
            printf("Marks for Subject %d: ",j+1);
            scanf("%d",&a[i].marks[j]);
            a[i].total+=a[i].marks[j];
        }
        a[i].avg=a[i].total/3;
        average+=a[i].avg;
        printf("\n------------------------");
    }
    max=a[0].total;
    min=a[0].total;
    for(i=1;i<10;i++)
    {
        if (a[i].total>max)
        {
            max=a[i].total;
            index1=i;
        }
        if (a[i].total<min)
        {
            min=a[i].total;
            index2=i;
        }
    }
    printf("\n%s whose roll no. is %d has secured the highest marks(%d).",a[index1].name,a[index1].roll,a[index1].total);
    printf("\n%s whose roll no. is %d has secured the lowest marks(%d).",a[index2].name,a[index2].roll,a[index2].total);
    printf("\nThe class average is= %0.2f",average);
    return 0;
}