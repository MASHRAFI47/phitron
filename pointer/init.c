#include <stdio.h>

int main() {
    int a = 5;
    int *b = &a;
    
    int value = *b;
    
    printf("%d\n", b); //prints the memory address
    printf("%d\n", *b); // prints the value of the memory address
    //printf("%d\n", value);
    
    return 0;
}