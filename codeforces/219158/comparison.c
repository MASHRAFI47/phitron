//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V

#include <stdio.h>
#include <stdbool.h>

int main() {
    int A, B;
    char S;
    
    bool value;
    
    scanf("%d %c %d", &A, &S, &B);
    
    if(S == '>') {
        value = A > B;
    }
    else if (S == '<') {
        value = A < B;
    }
    else if (S == '=') {
        value = A == B;
    }
    
    if(value == 1) {
        printf("Right\n");
    }
    else {
        printf("Wrong\n");
    }
}