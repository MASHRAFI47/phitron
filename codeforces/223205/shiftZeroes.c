#include <stdio.h>
 
int arr[1000];
 
void shift(int arr[], int n) {
    int count = 0;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            count++;
        }
    }
    
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            printf("%d ", arr[i]);
        }
    }
    
    for(int i = 0; i < count; i++) {
        printf("0 ");
    }
}
 
int main() {
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    shift(arr, n);
}