#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    int key;
    scanf("%d", &key);
    int pos = -1;
    for (int i = 0; i < 5; i++)
    {
        if (key == arr[i])
        {
            pos = i;
            printf("%d ", pos);
        }
    }
}