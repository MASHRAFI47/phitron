#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char str[50];
    scanf("%s", str);
    
    int num;
    
    for(int i = 0; i < n; i++) {
        int digit = str[i] - '0';
        num = num * 10 + digit;
    }
    
    printf("%d\n", num);
}