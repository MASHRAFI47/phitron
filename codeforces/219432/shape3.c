//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N-i; j++) {
            printf(" ");
        }
        for(int j = i; j >= 1; j--) {
            printf("*");
        }
        for(int j = 2; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    for(int i = N; i >= 1; i--) {
        for(int j = 1; j <= N-i; j++) {
            printf(" ");
        }
        for(int j = i; j >= 1; j--) {
            printf("*");
        }
        for(int j = 2; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}