#include <stdio.h>

int isVowel(char ch) {
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return 1;
    }
    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        return 1;
    }
    else {
        return 0;
    }
}

int count_vowels(char str[], int index) {
    
    if(str[index] == '\0') {
        return 0;
    }
    
    if(isVowel(str[index])) {
        return 1 + count_vowels(str, index + 1);
    }
    else {
        return 0 + count_vowels(str, index + 1);
    }
}

int main() {
    char str[201];
    scanf("%[^\n]s", str);
    
    int result = count_vowels(str, 0);
    
    printf("%d\n", result);

    return 0;
}