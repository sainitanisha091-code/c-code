#include <stdio.h>
struct student
{
    char name[50];
    int rollno;
    int marks[3];
    int averagemarks;
};
int main()
{
    struct student students[50];
    int n, i, j;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", students[i].name);
        scanf("%d", &students[i].rollno);
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &students[i].marks[j]);
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        int totalmarks = 0;
        for (j = 0; j < 3; j++)
        {
            totalmarks += students[i].marks[j];
        }
        students[i].averagemarks = totalmarks / 3;
    }

    for (int i = 0; i < n; i++)
    {
        if (students[i].averagemarks>40) {
            printf("%s-pass", students[i].name);
        }
        else{
            printf("\n%s-fail", students[i].name);
        }
    }
}
