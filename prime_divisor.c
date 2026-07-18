#include<stdio.h>
int main(){
    int n , i ; 
    int prime = 1;
    scanf("%d", &n);
    if(n<=1){
        printf("neither prime nor composite");
        return 0;
    }
    
    for (int i = 2 ; i *i<=n  ; i++){
        if (n%i==0){
            printf("%d", i);   // prints divisor  
        }
    return 0;

}
printf("prime number");
return 0;

}