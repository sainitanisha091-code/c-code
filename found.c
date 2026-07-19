#include<stdio.h>
int main(){
    int N ; 
    scanf("%d", &N);
    int arr[N];
    for (int i = 0 ; i < N ; i++){
        scanf("%d", &arr[i]);
    }
    int key ; 
    scanf("%d", &key);
    int found = 0;
    int count = 0;
    for (int i = 0 ; i < N ; i++){
        if (key==arr[i]){
            count++;
            found = 1;
        }
    }
    if (found){
        printf("FOUND %d times", count);
    }
    else{
        printf("Not found");
    }
}