#include <stdio.h>
#include <string.h>

char str[10000000];

int main() {
    fgets(str, sizeof(str), stdin);
    
    int length = strlen(str);
    
    int freq[26] = {0};
    
    for(int i = 0; i < length; i++) {
        char ch = str[i];
        int digit = ch - 'a';
        
        freq[digit]++;
    }
    
    for(int i = 0; i < 26; i++) {
        if(freq[i] > 0) {
            printf("%c : %d\n", i + 'a', freq[i]);
        }
    }
    
    return 0;
}