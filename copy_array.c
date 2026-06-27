#include <stdio.h>
int main()
{
    int a[10];
    for (int i = 0 ; i < 10; i++){
        scanf("%d", &a[i]);
    }
    int b[10];
    for (int i = 9 ; i >=0 ; i--){
        b[i]= a[10-1-i];
    }
    for (int i = 0 ; i < 10 ; i++){
        printf("%d\n", b[i]);
    }

    return 0;
}