#include <stdio.h>
int main()
{
    int N, n;
    int count = 0;
    scanf("%d", &N);
    while (N--)
    {
        scanf("%d", &n);
        if (n >= 50)
        {
            count += 1;
        }
    }
    printf("%d", count);

    return 0;
}