#include <stdio.h>
 
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    int *x = &a;
    int *y = &b;
    int *z = &c;

    
    if(*x < *y && *x < *z) {
        printf("%d", *x);
    }
    else if(*y < *z && *y < *z) {
        printf("%d", *y);
    }
    else if(*z < *x && *z < *y) {
        printf("%d", *z);
    }
    
    printf(" ");
    
    if(*x > *y && *x > *z) {
        printf("%d", *x);
    }
    else if(*y > *z && *y > *z) {
        printf("%d", *y);
    }
    else if(*z > *x && *z > *y) {
        printf("%d", *z);
    }
    
    return 0;
}
