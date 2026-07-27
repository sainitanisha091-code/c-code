#include<stdio.h>
int main(){
    int i = 3 , j= 3;
    int arr[i][j];
    for (int i = 0 ; i < 3 ; i++){
        for (int j=0 ; j < 3 ; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0 ; i < 3 ; i++){
        for (int j=0 ; j < 3 ; j++){
            printf("%d ", arr[i][j]);
        }
    
    printf("\n");
    }
    
}