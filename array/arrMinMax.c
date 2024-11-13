#include <stdio.h>
#include <limits.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int arr[N];
    
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    int min = INT_MAX;
    int max = INT_MIN;
    
    for(int i = 0; i < N; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    } 
    
    printf("%d\n", min);
    printf("%d\n", max);
}