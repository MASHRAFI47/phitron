// link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    long long int arr[N];

    for(int i = 0; i < N; i++) {
        scanf("%lld", &arr[i]);
    }

    long long int sum = 0;

    for(int i = 0; i < N; i++) {
        sum += arr[i];
    }
    
    if(sum < 0) {
        sum = sum * (-1);
    }

    printf("%lld\n", sum);
    
    return 0;
}

// int main() {
//     int N;
//     scanf("%d", &N);

//     long long int arr[N];

//     for(int i = 0; i < N; i++) {
//         scanf("%lld", &arr[i]);
//     }

//     long long int sum = 0;

//     for(int i = 0; i < N; i++) {
//         sum += arr[i];
//     }
    
//     long long int absValue = labs(sum);

//     printf("%lld\n", absValue);
    
//     return 0;
// }