// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int arr[N];
    
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    int find;
    scanf("%d", &find);
    
    int index = 1000000; // can be declared as -1 directly
    
    for(int i = 0; i < N; i++) {
        if(arr[i] == find) {
            index = i;
            break;
        }
    }
    
    if(index == 1000000) {
        printf("-1");
    }
    else {
        printf("%d\n", index);
    }
}