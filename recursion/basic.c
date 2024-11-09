#include <stdio.h>

void distribute(int roll, int chocolate) {
    if(roll == 4) {
        return;
    }

    printf("roll %d has %d chocolates and took one\n", roll, chocolate);
    distribute(roll + 1, chocolate - 1);
} 

int main() {
    distribute(1, 3);
}