//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G

#include <stdio.h>
 
int main() {
    int N;
    scanf("%d", &N);
    
    int arr[N];
    
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < N; i++) {
        long long fact = 1;
        
        for(int j = 1; j <= arr[i]; j++) {
            fact *= j;
        }
        
        printf("%lld\n", fact);
    }
}