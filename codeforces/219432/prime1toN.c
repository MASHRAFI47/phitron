//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J 

#include <stdio.h>
 
int main() {
    int N;
    scanf("%d", &N);
    
    int prime;
    
    for(int i = 2; i <= N; i++) {
        prime = 1;
        for(int j = 2; j < i; j++) {
            if(i%j == 0) {
                prime = 0;
                break;
            }
        }
        
        if(prime) {
            printf("%d ", i);
        }
    }
}