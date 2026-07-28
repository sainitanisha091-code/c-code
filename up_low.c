#include<stdio.h>
int main(){
    int up = 0;
    int low = 0;
    char str[100];
    scanf("%s", &str); 
    for (int i = 0 ; str[i]!='\0'; i++){
        if (str[i]>='A'&& str[i]<='Z'){
            up++;
        }
        else{
            low++;
        }
    }
    printf("%d %d", up ,low);
}