#include<stdio.h>
int main(){
    int N ;  // size of the array
    scanf("%d", &N);
    int arr[N];
    for (int i = 0 ; i < N ; i++){
        scanf("%d" , &arr[i]);
    }
    int max = arr[0];
    int max_2 = 0;
    for (int i = 0 ; i < N ; i++){
        if (arr[i]>max){
            max_2 = max;
           max = arr[i];
        }
        else if (arr[i]>max_2 && arr[i]!=max){
            max_2= arr[i];
        }
    }
    printf("%d\n%d", max , max_2);

}