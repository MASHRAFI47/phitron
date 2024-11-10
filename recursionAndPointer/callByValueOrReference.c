#include <stdio.h>

void fun(int a, int *b) {
    a = 100;    //call by value
    *b = 200;   //call by reference
}

int main() {
    int a = 10, b = 20;

    fun(a, &b);

    printf("%d %d", a, b);
}