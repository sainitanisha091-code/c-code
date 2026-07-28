#include<stdio.h>
int main(){
    char str[100];
    scanf("%s", &str);
    int l =0;
    while (str[l]!='\0')
    {
        l++;
    }
    printf("%d", l);
    
}