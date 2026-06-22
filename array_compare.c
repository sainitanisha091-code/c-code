#include <stdio.h>
int main()
{
    int arr[10]; 
    int n = 10 ; 
    for (int i = 0 ; i < 10 ;i++){
        scanf("%d", &arr[i]);
    }
 
        if (arr[0]==arr[n-1]&& arr[1]==arr[n-2]&& arr[2]==arr[n-3]&& arr[3]==arr[n-4]&& arr[5]==arr[n-5]){
            printf("Equal");
        }
        else{
            printf("Not Equal");
        }
    

    return 0;
}