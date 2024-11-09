#include <stdio.h>

int arr[100000], sum = 0;

void goToIndex(int i, int n) {
    if(i == n) {
        return;
    }
    
    sum += arr[i];
    
    goToIndex(i + 1, n);
}

int main() {
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    goToIndex(0, n);
    
    printf("%d\n", sum);
    
    return 0;
}