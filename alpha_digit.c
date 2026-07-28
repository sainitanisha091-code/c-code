#include<stdio.h>
int main(){
    int alpha = 0;
    int digit = 0;
    int special = 0;
    char str[100]; 
    scanf ("%s", &str);
    for (int i = 0 ; str[i]!= '\0' ; i++){
        if (str[i]>='A'&& str [i]<='Z'||str[i]>='a'&& str [i]<='z'){
            alpha++;
        }
        else if (str[i]>'0'&& str[i]<'9'){
            digit++;
        }
        else if (str[i]!='\0'){
            special++;
        }
    }
    printf("%d %d %d", alpha , digit , special);
}