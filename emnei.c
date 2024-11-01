#include <stdio.h>

int main() {
    int M, N;

    while (1) {
        // Read the input values
        scanf("%d %d", &M, &N);
        
        // Check for the stop condition
        if (M <= 0 || N <= 0) {
            break;
        }

        // Determine the smallest and largest values
        int smallest = (M < N) ? M : N;
        int largest = (M > N) ? M : N;

        // Print the sequence and calculate the sum
        int sum = 0;
        printf("%d", smallest);
        for (int i = smallest + 1; i <= largest; i++) {
            printf(" %d", i);
        }

        // Calculate the sum
        for (int i = smallest; i <= largest; i++) {
            sum += i;
        }

        // Print the sum
        printf(" Sum=%d\n", sum);
    }

    return 0;
}




#include <stdio.h>
 
int main() {
    
    int X, Y;
    scanf("%d %d", &X, &Y);
    
    int sum;
    
    if(X > Y) {
        for(int i = Y; i <= X; i++) {
            if(X <= 0 || Y <= 0) {
                break;
            }
            
            sum += i;
            
            printf("%d ", i);
        }
    }
    else if(Y > X) {
        for(int i = X; i <= Y; i++) {
            if(X <= 0 || Y <= 0) {
                break;
            }
            
            sum += i;
            
            printf("%d ", i);
        }
    }
    
    if(X > 0 && Y > 0) {
        printf("Sum=%d\n", sum);
    }
 
    return 0;
}