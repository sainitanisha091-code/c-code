#include<stdio.h>
int main(){
    int arr[5];
    for (int i = 0 ; i < 5 ; i++){
    scanf("%d", &arr[i]);
    }
    int key ;  // the element to be searched
    int found = 0;
    int pos = -1;
    scanf("%d", &key);
    for (int i = 0 ; i < 5 ; i++){
        if (key == arr[i]){
            found = 1;
            pos = i;
            break;
        }
    }
    if(found){
        printf("%d",pos);
    }
    else{
        printf("-1");
    }
}