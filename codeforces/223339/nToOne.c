//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C

#include <stdio.h>

void nToOne(int n, int y) {
    if(n < 1) {
        return;
    }
    
    printf("%d", n);
    
    if(n == 1) {
        printf("");
    }
    else {
        printf(" ");
    }
    
    nToOne(n - 1, 1);
}

int main() {
    int n;
    scanf("%d", &n);
    
    nToOne(n, 1);
    
    return 0;
}