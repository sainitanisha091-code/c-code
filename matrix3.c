#include<stdio.h>
int main(){
    int even = 0;
    int odd = 0;
    int arr[3][3];
    for (int i = 0 ;i < 3 ; i++){
        for (int j = 0 ;j < 3 ;j++){
           scanf("%d", &arr[i][j]); 
        }
    }
      for (int i = 0 ;i < 3 ; i++){
        for (int j = 0 ;j < 3 ;j++){
           if (arr[i][j]%2==0){
            even++;
           }
           else{
            odd++;
           }
        }
    }
    printf("%d %d", even , odd);
    
}