// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R

#include <stdio.h>

int main() {
    while(1) {
        int M, N;
        scanf("%d %d", &M, &N);
        
        if(M <= 0 || N <= 0) {
            break;
        }
        
        if(M > N) {
            int temp = M;
            M = N;
            N = temp;
        }
        
        int sum = 0;
        
        for(int i = M; i <= N; i++) {
            printf("%d ", i);
            sum += i;
        }
        
        printf("sum =%d\n", sum);
    }
    
}