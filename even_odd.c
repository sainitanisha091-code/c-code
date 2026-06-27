#include<stdio.h>
void separate(int a[], int T)
{
   int even[100];
    int odd[100];
    int e = 0 , o = 0; 
        
    int i ;
    for ( i = 0 ; i < T ; i++){
        if (a[i]%2==0){
            even[e]=a[i];
            e++;
        }
        else{
            odd[o]= a[i];
            o++;
        }
    }
    printf("Even:");
    for (int i = 0 ; i < e ;i++){
    printf("%d", even[i]);
        if (i !=e-1){
            printf(" ");
        }
    }
    printf("\nOdd:");
    for (int i = 0 ; i < o ; i++){
    printf("%d", odd[i]);
        if (i != o-1){
            printf(" ");
        }
    }
}
int main()
{
  int t,arr[100],n;
  scanf("%d",&t);
  int i;
  for(i=0;i<t;i++)
    scanf("%d",&arr[i]);
  separate(arr,t);
  return 0;
}

