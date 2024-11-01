#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    char x[1001], y[1001], z[1001];
    scanf("%s %s %s", x, y, z);
    
    int prime = 0;
    for(int i = 0; i < 1001; i++) {
        if(x[i] == y[i] && y[i] == z[i] && z[i] == x[i]) {
            printf("")
        }
        
    }
    
    printf("%d", prime);
    
    for(int i = 0; i < 1001; i++) {
        if(x[i] <= y[i] && x[i] <= y[i]) {
            printf("%s\n", x);
            break;
        }
        else if(y[i] <= z[i] && y[i] <= x[i]) {
            printf("%s\n", y);
            break;
        }
        else if(z[i] <= x[i] && z[i] <= y[i]) {
            printf("%s\n", y);
            break;
        }
    }
    
    for(int i = 0; i < 1001; i++) {
        if(x[i] >= y[i] && x[i] >= y[i]) {
            printf("%s\n", x);
            break;
        }
        else if(y[i] >= z[i] && y[i] >= x[i]) {
            printf("%s\n", y);
            break;
        }
        else if(z[i] >= x[i] && z[i] >= y[i]) {
            printf("%s\n", z);
            break;
        }
    }

    
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
