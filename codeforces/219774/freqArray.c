//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V

#include <stdio.h>

int f[100001];
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int arr[n+5];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        
        f[arr[i]]++;
    }
    
    
    for(int i = 1; i <= m ; i++) {
        printf("%d\n", f[i]);
    }
    
    return 0;
}