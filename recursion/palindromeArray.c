#include <stdio.h>

int arr[100000];

int isPalin(int *a, int i, int j) {
    if(i > j) {
        return 1;
    }
    
    return arr[i] == arr[j] && isPalin(arr, i + 1, j - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    if(isPalin(arr, 0, n-1)) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
}