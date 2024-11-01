#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(5 * sizeof(arr));
    
    for(int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }
    
    for(int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }
    
    int *temp = arr;
    
    arr = (int *)realloc(arr, 10 * sizeof(arr));
    
    if(arr == NULL) {
        arr = temp;
    }
    
    for(int i = 5; i < 10; i++) {
        arr[i] = i + 1;
    }
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    
    free(arr);

    return 0;
}