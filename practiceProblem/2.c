/*
    Problem Statement: Given an integer N (1 <= N <= 10^5) and an array of N numbers (1 <= A[i] <= 10^5). Print how many unique numbers are in the array.f



    Sample Input
    Sample Output
    5
    1 2 1 4 2
    3
    7
    1 1 2 3 2 3 7
    4
    5
    1 2 3 4 5
    5


*/


#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    int freq[10000] = {0};
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        
        freq[arr[i]]++;
    }
    
    int count = 0;
    
    for(int i = 0; i <= n; i++) {
        if(freq[i] > 0) {
            count++;
        }
        //printf("%d\n", freq[i]);
    }
    
    printf("%d\n", count);
}