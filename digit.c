#include<stdio.h>
int main(){
    int n ; 
    scanf("%d",&n);
    int evencount = 0 ; 
    int oddcount = 0 ; 
    while (n!=0){
        int digit = 0 ; 
        digit = n%10 ; 
        if (digit%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
        n = n/10; 
    }
    printf("%d %d" , evencount , oddcount);
}