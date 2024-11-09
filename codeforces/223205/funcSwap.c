#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    
    printf("%d %d\n", *x, *y);
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    
    int *a = &x;
    int *b = &y;
    
    swap(a, b);

    return 0;
}