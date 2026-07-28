#include<stdio.h>
int main(){
    int positive = 0;
    int negative = 0;
    int arr[10];
    for (int i = 0 ; i < 10 ; i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 0 ; i < 10 ; i++){
        if (arr[i]>=0){
            positive++;
        }
        else{
            negative++;
        }
    }
    printf("%d %d", positive , negative);
}