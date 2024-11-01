//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T

#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    
    if(A <= B && A <= C) {
        //a min
        if(B <= C) {
            //c max
            printf("%d\n%d\n%d\n", A, B, C);
        }
        else {
            //c min
            printf("%d\n%d\n%d\n", A, C, B);
        }
    }
    else if(B <= A && B <= C) {
        if(A <= C) {
            printf("%d\n%d\n%d\n", B, A, C);
        }
        else {
            printf("%d\n%d\n%d\n", B, C, A);
        }
    }
    else {
        if(B <= A) {
            printf("%d\n%d\n%d\n", C, B, A);
        }
        else {
            printf("%d\n%d\n%d\n", C, A, B);
        }
    }
    
    printf("\n");
    
    printf("%d\n%d\n%d\n", A, B, C);
}