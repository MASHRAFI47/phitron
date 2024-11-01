//https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/A

#include <stdio.h>
 
int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    
    int *a = &x;
    int *b = &y;
    
    printf("%d", *a + *b);
    
    return 0;
}