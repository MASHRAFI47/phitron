#include <stdio.h>

int arr[100000];

int main() {
    int length = 0;
    scanf("%d", &length);
    
    for(int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }
    
    int index, value;
    scanf("%d %d", &index, &value);
    
    length++;
    
    for(int i = length - 1; i >= index; i--) {
        arr[i+1] = arr[i];
        //arr[i] = arr[i-1];
    }
    
    arr[index] = value;
    
    for(int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}