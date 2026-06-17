#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
long fact(int n) {
    long f = 1 ; 
    int i ; 
    for (i = 1 ; i <=n ; i++){
        f = f*i;
    }
    return f ; 
  
}

int main()
{
   int n;
   scanf("%d",&n);
   printf("%ld", fact(n));
}