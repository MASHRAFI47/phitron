// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int arr[N];
    
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < N; i++) {
        if(arr[i] < 0) {
            printf("2 ");
        }
        else {
            if(arr[i] == 0) {
                printf("0 ");
                continue;
            }
            printf("1 ");
        }
    }
}