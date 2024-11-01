#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;

    printf("%d\n%d\n", &arr[0], p);
    printf("%d\n%d\n", &arr[2], p + 2);

    return 0;
}