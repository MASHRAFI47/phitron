#include <stdio.h>

// int a[10000], b[10000]

int main() {
    int n;
    // scanf("len1, len2");
    scanf("%d", &n);
    
    int arr[n];
    int arr2[10000];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n before copy\n");
    
    for(int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    
    printf("\n");
    
    for(int i = 0; i < n; i++) {
        arr2[i] = arr[i];
    }
    
    arr[2] = 100;
    
    //length2 = length1
    
    printf("\n After copy\n");
    
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    
    for(int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}