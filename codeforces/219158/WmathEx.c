//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W

#include <stdio.h>

int main() {
    int A, B, C;
    char S, Q;
    int value;
    
    scanf("%d %c %d %c %d", &A, &S, &B, &Q, &C);
    
    if(S == '+' && Q == '=') {
        if(A + B == C) {
            printf("Yes\n");
        }
        else {
            value = A + B;
            printf("%d\n", value);
        }
    }
    else if(S == '-' && Q == '=') {
        if(A - B == C) {
            printf("Yes\n");
        }
        else {
            value = A - B;
            printf("%d\n", value);
        }
    }
    else if(S == '*' && Q == '=') {
        if(A * B == C) {
            printf("Yes\n");
        }
        else {
            value = A * B;
            printf("%d\n", value);
        }
    }
    
    return 0;
}