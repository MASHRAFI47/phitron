// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B

#include <stdio.h>

void oneToN(int x, int n) {
    if(x > n) {
        return;
    }
    
    printf("%d\n", x);
    
    oneToN(x + 1, n);
}

int main() {
    int n;
    scanf("%d", &n);
    
    oneToN(1, n);
}