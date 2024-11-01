//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C

#include <stdio.h>
#include <string.h>

int main() {
    char a[20+1]; 
    char b[20+1]; 
    
    scanf("%s %s", a, b);
    
    int cmp = strcmp(a, b);
    
    if(cmp < 0) {
        printf("%s", a);
    }
    else if(cmp > 0) {
        printf("%s", b);
    }
    else {
        printf("%s", a);
    }
    
    return 0;
}