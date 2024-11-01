//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n+5][n+5];
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    int mainDiag = 0, secDiag = 0;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) {
                mainDiag += arr[i][j];
            }
            if(i+j == n-1) {
                secDiag += arr[i][j];
            }
        }
    }
    
    int diff = abs(mainDiag - secDiag);
    printf("%d\n", diff);
    
    return 0;
}