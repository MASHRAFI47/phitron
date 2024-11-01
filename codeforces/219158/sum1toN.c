// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/G

#include <stdio.h>
 
int main() {
    int N;
    scanf("%d", &N);
    
    long long int sum = (1LL * (N + 1) * N) / 2;
    
    printf("%lld\n", sum);
    
    return 0;
}