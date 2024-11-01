// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E

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
    int index;
    
    for(int i = 0; i < N; i++) {
        if(arr[i] < min) {
            min = arr[i];
            index = i + 1;
        }
    }
    
    printf("%d %d\n", min, index);
}