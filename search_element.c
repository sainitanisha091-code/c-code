#include<stdio.h>
int main(){
    int key = 2 ; 
    int arr[5];
    for (int i = 0 ; i < 5 ; i++){
        scanf("%d", &arr[i]);
    }
    int found = 0 ;
    for (int i = 0 ; i < 5 ; i++){
        if (arr[i]==key){
            found = 1 ;
            break;
        }
    }
    if (found){
        printf("Found");
    }
    else{
        printf("Not Found");
    }
}