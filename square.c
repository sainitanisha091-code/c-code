#include<stdio.h>
#include<math.h>
void isSquare(int n)
{
    int root = sqrt(n);
  if ( root*root== n){
      printf("yes");
  }
    else{
        printf("no");
    }
}

int main()
{
    int num;
    scanf ("%d", &num);
    isSquare(num);
    return 0;
}