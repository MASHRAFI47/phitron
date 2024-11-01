#include <stdio.h>
#include <string.h>

int main() {
    char a[50];
    char b[50] = "abcde";
    
    // int length = strlen(b);
    
    printf("%s %s\n", a, b);
    
    // for(int i = 0; i < length; i++) {
    //     a[i] = b[i];
    // }
    
    // a[length] = '\0';
    
    strcpy(a, b);
    
    printf("%s %s\n", a, b);
    
    return 0;
}