#include <stdio.h>

void sum(int x, int y) {
    int sum = 0;
    
    sum = x + y;
    
    printf("%d\n", sum);
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    
    sum(x, y);
}