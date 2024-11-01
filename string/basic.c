#include <stdio.h>

int main() {
    char str[50];
    
    // scanf("%[^\n]s", str);
    // printf("%s\n", str);
    
    fgets(str, sizeof(str), stdin);
    fputs(str, stdout);
}