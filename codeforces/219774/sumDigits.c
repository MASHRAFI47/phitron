// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K


#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char num[n+1];
    scanf("%s", num);
    
    long long int sum = 0;
    
    for(int i = 0; i < n; i++) {
        int digit = num[i] - '0';
        sum += digit;
    }
    
    printf("%d\n", sum);
}




// #include <stdio.h>

// int main() {
//     int N, sum = 0;
//     scanf("%d", &N);
    
//     for(int i = 0; i < N; i++) {
//         int digit;
//         scanf("%1d", &digit);
//         sum += digit;
//     }
    
//     printf("%d\n", sum);
    
//     return 0;
// }