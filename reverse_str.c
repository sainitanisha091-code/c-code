#include<stdio.h>
int main(){
    int i = 0 ;
    char str[100]; 
    scanf("%s", &str);
    while (str[i]!='\0'){
        i++;
    }
    for (i= i-1 ; i >=0 ; i--) {
        printf("%c", str[i]);
    }
}