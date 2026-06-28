#include <stdio.h>
int main()
{
    int key ;
    int arr[5];
    printf("enter the elements");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the element to found:");
    scanf("%d", &key);
    int found = 0;
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            found = 1;

            count++;
        }
    }
    if (found)
    {
        printf("%d times", count);
    }
    else
    {
        printf("Not found");
    }
}