#include <stdio.h>
int main()
{
    int N; // number of elements in an  array
    scanf("%d", &N);
    int k;   // new element
    int pos; // position at which element is added
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter new element");
    scanf("%d", &k);

    printf("Enter position");
    scanf("%d", &pos);

    for (int i = N - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = k;
    N++;
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}