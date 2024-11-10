#include <stdio.h>

fun(int *a, int n) {
    a[0] = 100;
}

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    fun(a, 10);

    for(int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}