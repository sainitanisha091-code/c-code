#include<stdio.h>
#include<math.h>
int power(int num , int p){
    int result ; 
    result = pow(num , p);
    return result;
}
int main(){
    int a , b ; 
    scanf("%d %d", &a , &b); 
    printf("%d", power(a,b)); 
}