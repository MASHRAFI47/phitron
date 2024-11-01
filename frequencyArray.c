#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n+5];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int f[10000] = {0};
    
    for(int i = 0; i < n; i++) {
        f[arr[i]]++;
    }
    
    for(int i = 0; i < n; i++) {
        printf("%d ", f[i]);
    }
    
    printf("\n");
    
    
    //ache ki nai
    int m;
    scanf("%d", &m);
    
    int a[m + 5];
    
    for(int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }
    
    for(int i = 0; i < m; i++) {
        if(f[a[i]] > 0) {
            printf("%d is there\n", a[i]);
        }
    }


    // for(int i = 0; i < m; i++) {
    //     int x;
    //     scanf("%d", &x);

    //     if(f[i] > 0) {
    //         printf("ache\n");
    //     }
    //     else {
    //         printf("Nai\n");
    //     }
    // }
}