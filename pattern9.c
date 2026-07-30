#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char str = 'A';
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j < i)
            {
                printf("%c ", str+j);
            }
            else
            {
                printf("%c", str+j);
            }

        }
        printf("\n");
    }
}