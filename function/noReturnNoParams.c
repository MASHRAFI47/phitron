#include <stdio.h>

void add() {
    int a, b; 
    scanf("%d %d", &a, &b);

    int sum = a + b;

    printf("%d\n", sum);
}

int main() {
    add();
}