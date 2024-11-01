#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    if(N == 1) {
        printf("-1");
    }
    else {
        for(int i = 2; i <= N; i++) {
            if(i%2 == 0) {
                printf("%d\n", i);
            }
        }
    }
    
}