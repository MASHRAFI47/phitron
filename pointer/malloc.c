#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(5 * sizeof(int));
    
    for(int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }
    
    for(int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }
}