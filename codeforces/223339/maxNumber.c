// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/K

#include <stdio.h>
#include <limits.h>
 
int max = INT_MIN;
 
void maxNumber(int arr[], int index, int n) {
    if(index == n) {
        return;
    }
    
    if(arr[index] > max) {
        max = arr[index];
    }
    
    maxNumber(arr, index + 1, n);
}
 
int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    maxNumber(arr, 0, n);
    
    printf("%d\n", max);
}