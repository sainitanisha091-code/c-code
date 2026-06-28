#include<stdio.h>
int main(){
    int key = 2 ; 
    int arr[5];
    for (int i = 0 ; i < 5 ; i++){
        scanf("%d", &arr[i]);
    }
    int found = 0 ;
    int pos = -1;
    for (int i = 0 ; i < 5 ; i++){
        if (arr[i]==key){
            found = 1 ;
            pos = i ;
            break;
        }
    }
    if (found){
        printf("Found at postion %d", pos);
    }
    else{
        printf("Not Found");
    }
}