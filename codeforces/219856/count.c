// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E

#include <stdio.h>
#include <string.h>

int main() {
    char digit[1000000+1];
    
    scanf("%s", digit);
    
    int length = strlen(digit);
    
    int sum = 0;
    for(int i = 0; i < length; i++) {
        int dig = digit[i] - '0';
        sum += dig;
    }
    
    printf("%d\n", sum);
    
    return 0;
}