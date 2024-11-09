#include <stdio.h>

void limit(int x, int n) {

    if(x > n) {
        return;
    }

    printf("%d\n", x);
    limit(x + 1, n);
}

int main() {
    int n;
    scanf("%d", &n);

    limit(1, n);
}