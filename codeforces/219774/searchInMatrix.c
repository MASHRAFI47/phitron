//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S

#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int arr[n][m];
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    int x;
    scanf("%d", &x);
    
    bool take = true;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(arr[i][j] == x) {
                take = false;
                break;
            }
        }
    }
    
    if(take) {
        printf("will take number\n");
    }
    else {
        printf("will not take number\n");
    }
    
    return 0;
}