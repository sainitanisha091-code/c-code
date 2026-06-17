#include<stdio.h>
#include<math.h>
void isArmstrong(int n){
    int digit ; 
    int sum = 0 ; 
    int count = 0 ; 
    int result ; 
    int original  = n ; 
    if (n==0){
        printf("yes"); 
        return ; 
    }
    while (n!=0){
        digit = n%10 ; 
        count++; 
        n = n/10;
    }
    n = original; 
    while (n!=0){
        digit = n%10;
        result = pow(digit, count); 
        sum+= result; 
        n = n/10;
    }
    if (sum==original){
        printf("yes");
    }
    else{
        printf("no");
    }
}
int main()
{
    int num;
    scanf ("%d", &num);
    isArmstrong(num);
    return 0;
}