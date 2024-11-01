#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    int *ptr = &n;
    
    scanf("%d", ptr);
    
    int *arr;
    arr = (int *)malloc(n * sizeof(int));
    
    //int *temp = arr;
    
    arr = (int *)realloc(arr, (n+5)*sizeof(int));
    
    // if(arr = NULL) {
    //     arr = temp;
    // }
    
    for(int i = 0; i < n+5; i++) {
        scanf("%d", arr + i);
    }
    
    for(int i = 0; i < n+5; i++) {
        printf("%d ", *(arr + i));
    }
    
    free(arr);
}