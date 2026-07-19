#include<stdio.h>
struct student{
    char name[50];
    int rollNo; 
    float marks[3];
    float averagemarks;
};
int main(){
    struct student students[50];
    int n , i , j;
    // enter the total number of students
    scanf("%d", &n);
    // input student records 
    for (i = 0 ; i < n ; i++){
        scanf("%s" , students[i].name);
        // enter rollno of student
        scanf("%d", &students[i].rollNo);
        // enter marks for three subjects
        for (j = 0 ; j < 3 ; j++){
            scanf("%f", &students[i].marks[j]);
        }
    }

    // calculating average fo reach student
    for (int i = 0 ; i <  n ; i++){
        float totalmarks = 0.0;
        for (j = 0 ; j< 3  ; j++){
            totalmarks+= students[i].marks[j];

        }
        students[i].averagemarks = totalmarks/3.0;
    }

    // print the average marks of the students
    for (i = 0 ; i < n ; i++){
        printf("%.2f\n", students[i].averagemarks);
    }
}