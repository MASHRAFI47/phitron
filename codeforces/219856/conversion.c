//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G

#include <stdio.h>
 
int main() {
    char str[100000];
    scanf("%s", str);
    
    int strLength = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        strLength++;
    }
    
    for(int i = 0; i < strLength; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            printf("%c", str[i] - 32);
        }
        else if(str[i] >= 'A' && str[i] <= 'Z') {
            printf("%c", str[i] + 32);
        }
        else if(str[i] == ',') {
            printf(" ");
        }
    }
    
    return 0;
}
