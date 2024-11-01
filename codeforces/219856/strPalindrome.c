#include <stdio.h>
#include <stdbool.h>

int main() {
    char str[1001];
    scanf("%s", str);
    
    int count = 0;
    
    for(int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    
    bool palindrome = true;
    
    for(int i = 0, j = count-1; i <= j; i++, j--) {
        if(str[i] != str[j]) {
            palindrome = false;
            break;
        }
    }
    
    if(palindrome) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    
    return 0;
}