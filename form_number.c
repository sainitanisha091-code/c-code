#include <stdio.h>
int evenDigits(int n)
{
    if (n==0){
        return 0 ;
    }
    int digit = n%10; 
    int result = evenDigits(n/10);
    if (digit%2==0){
        return result*10+digit;
    }
    else{
        return result;
    }
     
}

int main()
{
   int T, no;
   scanf("%d",&T);
   while(T--)
   {
     scanf("%d",&no);
     printf("%d\n",evenDigits(no));
   }
 return 0;
}