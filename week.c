#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n < 0)
        n = -n;

    int temp = n;
    int digit;

    while (temp != 0)
    {
        digit = temp % 10;

        if (digit == 8 || digit == 9 || digit == 0)
        {
            printf("Invalid number");
            return 0;
        }

        temp /= 10;
    }

    while (n >= 10)
    {
        n /= 10;
    }

    switch (n)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Invalid number");
    }

    return 0;
}