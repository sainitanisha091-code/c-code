#include<stdio.h>
 struct  Employee{
    char name[50];                                                                                                      
    int EmployeeID; 
    int salary[3];
    int averagesalary;
 };
int main(){
    struct  Employee Employees [50];
    int n ;
    scanf("%d", &n);
    for (int i = 0 ; i < n ;i++){
        scanf("%s", Employees[i].name);
        scanf("%d", &Employees[i].EmployeeID);
        for (int  j = 0 ; j < 3 ; j++){
            scanf("%d", &Employees[i].salary[j]);
        }
    }

    for (int i = 0 ; i < n ; i++){
        int totalsalary = 0;
        for (int j = 0 ; j < 3 ; j++){
            totalsalary +=  Employees[i].salary[j];
        }
        Employees[i].averagesalary = totalsalary/3;
    }

    for (int i = 0 ; i < n ; i++){
        printf("%d ", Employees[i].averagesalary);
    }


                                                                               
}