#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int arr[n+5][m+5];
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(n == m) {
                printf("Square Matrix\n");
                
                if(i == j) {
                    printf("Diagonal Matrix\n");
                    
                }
                
                if(i+j == (n-1)) {
                    printf("Secondary Diagonal\n");
                }
            }
        }
    }
}