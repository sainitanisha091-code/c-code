#include <stdio.h>
int main()
{
    int m , n ; 
    scanf("%d%d", &n , &m);
    int multi = 0 ;
    for (int i = 1 ; i <= m ; i++){
        multi = n*i;
      printf("%d\n", multi);
    }
    

    return 0;
}