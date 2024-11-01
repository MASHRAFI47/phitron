/*
    Problem Statement: Given a string of length N. Print the unique characters in the string in increasing alphabetical order.



        Sample Input
        Sample Output
        3
        abc
        abc
        5
        apple
        aelp
        7
        abbgaab
        abg


*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int freq[26] = {0};
    
    for(int i = 0; i <= n; i++) {
        char ch;
        scanf("%c", &ch);
        
        int digit = ch - 'a';
        freq[digit]++;
    }
    
    for(int i = 0; i < 26; i++) {
        if(freq[i] > 0) {
            printf("%c", i + 'a');
        }
    }
    
    return 0;
}