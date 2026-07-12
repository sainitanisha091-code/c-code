#include<stdio.h>
int main(){
    int a , b , c , d , e ; 
    scanf("%d%d%d%d%d", &a , &b , &c , &d , &e);
    if (d==0){
        printf("division by zero is not allowed");
        return 1;
    }
    int result_1 = a+b*c/d-e;
    float result_2 = ((a+b)-e)*(c/(float)d);
    printf("%d", result_1);
    printf("\n%f", result_2);
}