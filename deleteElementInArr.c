#include <stdio.h>

int arr[100000];

int main()
{
    int len = 0;
    scanf("%d", &len);

    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }

    int index;
    scanf("%d", &index);

    if (index < 0 || len > index)
    {
        printf("Wrong Answer\n");
    }

    len--;

    for (int i = index; i <= len; i++)
    {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}