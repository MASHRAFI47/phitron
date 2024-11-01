#include <stdio.h>

int main() {
    char str[50] = "Bangl\\adesh\n is \t a \"beau\0tiful\" country";
    
    fputs(str, stdout);
}