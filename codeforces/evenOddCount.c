#include <stdio.h>

int main() {
    int n, evenCount = 0, oddCount = 0, positiveCount = 0, negativeCount = 0;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        
        if(x % 2 == 0) {
            evenCount++;
            
            if(x > 0) {
                positiveCount++;
            }
            else if(x < 0){
                negativeCount++;
            }
        }
        else {
            oddCount++;
            
            if(x > 0) {
                positiveCount++;
            }
            else if(x < 0){
                negativeCount++;
            }
        }
    }
    
    printf("Even: %d\n", evenCount);
    printf("Odd: %d\n", oddCount);
    printf("Positive: %d\n", positiveCount);
    printf("Negative: %d\n", negativeCount);
}