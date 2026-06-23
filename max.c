#include <stdio.h>
int maxElement(int arr[], int N) {
    int max = arr[0];
    for (int i = 0 ;  i< N ; i++){
        if (max< arr[i]){
            max = arr[i];
        }
    }
    return max;
    
    
}
int main(){
  int i, size;
  scanf("%d", &size);
  int array[size]; 
  for(i = 0; i < size; i++)
    scanf("%d", &array[i]);
  printf("%d", maxElement(array, size));
  return 0;
}