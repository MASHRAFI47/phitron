#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *ptr = &n;
    
    scanf("%d", ptr);
    
    int *arr = (int *)malloc(n * sizeof(int));
    
    arr = (int *)realloc(arr, n * sizeof(int));
    
    for(int i = 0; i < n; i++) {
        scanf("%d", (arr + i));
    }
    
    for(int i = 0; i < n; i++) {
        if(*(arr + i) > 0) {
            printf("%d ", 1);
        }
        else if(*(arr + i) < 0) {
            printf("%d ", 2);
        }
        else {
            printf("%d ", 0);
        }
    }
    
    free(arr);
    
    return 0;
}