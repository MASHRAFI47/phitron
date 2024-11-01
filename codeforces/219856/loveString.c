// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        char a[51], b[51];
        scanf("%s %s", a, b);
        
        int len_a = strlen(a);
        int len_b = strlen(b);
        
        if(len_a >= len_b) {
            for(int j = 0; j < len_a; j++) {
                if(j < len_b) {
                    printf("%c%c", a[j], b[j]);
                }
                else {
                    printf("%c", a[j]);
                }
            }
        }
        else {
            for(int j = 0; j < len_b; j++) {
                if(j < len_a) {
                    printf("%c%c", a[j], b[j]);
                }
                else {
                    printf("%c", b[j]);
                }
            }
        }
        printf("\n");
    }
    
    return 0;
}