#include <stdio.h>
int main()
{
    int N; // number of elements in an  array
    scanf("%d", &N);
    int k;   // deleted element
    int pos; // position at which element is deleted
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter deleted element");
    scanf("%d", &k);

    printf("Enter position");
    scanf("%d", &pos);

    for (int i = pos; i < N - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    N--;
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}