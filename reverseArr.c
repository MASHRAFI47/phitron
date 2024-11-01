#include <stdio.h>

int arr[10000], arr2[10000];

int main() {
    int length = 0;
    scanf("%d", &length);
    
    for(int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }
    
    //reverse array in another array
    for(int i = 0, j = length - 1; i < length, j >= 0; i++, j--) {
        arr2[j] = arr[i];
    }

    
    for(int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    
    for(int i = 0; i < length; i++) {
        printf("%d ", arr2[i]);
    }
    
    
    printf("\n after reverse operation to a single array\n");
    
    //taking that reverse values to the first array
    for(int i = 0; i < length; i++) {
        arr[i] = arr2[i];
    }
    
    for(int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}