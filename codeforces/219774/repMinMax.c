// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M

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
    
    int minIndex, maxIndex;
    
    for(int i = 0; i < N; i++) {
        if(arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }
        
        if(arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
    }
    
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;
    
    for(int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}