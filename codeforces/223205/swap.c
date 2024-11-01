//https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/E

#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    
    int *a = &x;
    int *b = &y;
    
    int temp = *a;
    *a = *b;
    *b = temp;
    
    printf("%d %d", x, y);
    
    return 0;
}