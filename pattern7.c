#include<stdio.h>
int main(){
    int n ; 
    scanf("%d", &n);
    char str =  'A'; 
    for (int i = 0 ; i <n ; i++){
        for (int j = 0 ; j <=i ; j++){
            if (j<i){
                printf("%c ", str);
            }
            else{
                printf("%c", str);
            }
            
            
        }
        str++;
        printf("\n");
    }

}