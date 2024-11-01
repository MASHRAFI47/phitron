#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int rem, temp;
    while(N != 0) {
        temp = rem;
        rem = N % 10;
        N = N / 10;
    }
    if(temp % rem == 0 || rem % temp == 0) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
   
}