#include <stdio.h>

void limit(int n, int y) {
    if(n < 1) {
        return;
    }
    
    printf("%d\n", n);
    
    limit(n - 1, y);
}

int main() {
    int n;
    scanf("%d", &n);
    
    limit(n, 1);
}