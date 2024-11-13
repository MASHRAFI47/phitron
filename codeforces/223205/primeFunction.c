//https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/D

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void prime(int n) {
    if(n == 1) {
        printf("NO\n");
        return;
    }
    bool prime = true;
    int root = sqrt(n);
    for(int i = 2; i <= root; i++) {
        if(n%i == 0) {
            prime = false;
            break;
        }
    }
    
    if(prime) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
}

int main() {
    int t;
    scanf("%d", &t);
    
    for(int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        
        prime(n);
    }

    return 0;
}