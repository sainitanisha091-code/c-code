#include <stdio.h>
int main()
{
    int N, n;
    scanf("%d", &N);
    while (N--)
    {
        scanf("%d", &n);
        int reverse = 0;
        int original = n;
        int digit;

        while (n != 0)
        {
            digit = n % 10;
            reverse = reverse * 10 + digit;
            n = n / 10;
        }
        if (reverse == original)
        {
            printf("Equal\n");
        }
        else
        {
            printf("Not Equal\n");
        }
    }
    return 0;
}