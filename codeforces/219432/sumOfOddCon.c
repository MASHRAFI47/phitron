//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        
        if(X > Y) {
            int temp = X;
            X = Y;
            Y = temp;
        }
        
        int sum = 0;
        
        for(int j = X+1; j < Y; j++) {
            if(j%2 != 0) {
                sum += j;
            }
        }
        printf("%d\n", sum);
    }
}