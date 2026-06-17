#include <stdio.h>
int main()
{
    int N , n ,  sum, digit ; 
    scanf("%d", &N); 
    while (N--){
        scanf("%d", &n);
        sum = 0;
    
    while (n>0){
        digit = n%10;
        sum+= digit; 
        n = n/10;
    }
    printf("%d\n", sum);
    }
    return 0;
}