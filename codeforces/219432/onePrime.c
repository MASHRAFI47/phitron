// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int count = 0;
    
    for(int i = 2; i < N; i++) {
        if(N%i == 0) {
            count++;
        } 
    }
    
    if(count > 0) {
        printf("NO\n");
    }
    else {
        printf("YES\n");
    }
}