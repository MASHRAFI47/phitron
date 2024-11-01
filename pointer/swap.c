#include <stdio.h>

int main() {
    int a = 5, b = 6;
    int *x = &a, *y = &b;
    
    int temp = *x;
    *x = *y;
    *y = temp;
    
    printf("%d\n%d\n", *x, *y);

    return 0;
}