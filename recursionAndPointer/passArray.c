#include <stdio.h>

int fun(int a[], int n) {
    int sum = 0;
    
    for(int i = 0; i < n; i++) {
        sum += a[i];
    }
    
    return sum;
}

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int result = fun(a, 10);
    
    printf("%d\n", result);
}