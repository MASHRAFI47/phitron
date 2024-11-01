#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char str[n+1];
    scanf("%s", str);
    
    int count = 0;
    
    for(int i = 0; str[i] != '\0'; i++) {
        count++;
    }

    int digit = 0;
    
    if(count > n) {
        for(int i = 1; i < count - 1; i++) {
            digit++;
        }
    }
    
    // printf("%d\n", digit);
    // printf("%c\n", str[0]);
    // printf("%c\n", str[count - 1]);
    
    if(count <= 4) {
        fputs(str, stdout);
    }
    else {
        printf("%c%d%c", str[0], digit, str[count-1]);
    }
}