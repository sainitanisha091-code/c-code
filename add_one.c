#include <stdio.h>

int main()
{
    int N, n;

    scanf("%d", &N);

    while (N--)
    {
        scanf("%d", &n);

        int digit;
        int result = 0;
        int place = 1;

        while (n > 0)
        {
            digit = n % 10;
            int add = digit + 1;

            result = result + add * place;

            n = n / 10;
            place = place * 10;
        }

        printf("%d\n", result);
    }

    return 0;
}