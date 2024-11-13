//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/P

#include <stdio.h>

long long logTwo(long long n) {
    if(n <= 1) {
        return 0;
    }
    
    return 1 + logTwo(n / 2);
}

int main() {
    long long n;
    scanf("%lld", &n);
    
    long long result = logTwo(n);
    
    printf("%lld\n", result);
}