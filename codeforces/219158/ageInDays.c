#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int res, res2;
    
    res = N / 365;
    printf("%d years\n", res);
    res = N % 365;
    
    res2 = res % 30;
    
    res = res / 30;
    printf("%d months\n", res);
    
    res = res % 30;
    printf("%d days\n", res2);
    
}



#include <stdio.h>
 
int main() {
    int N;
    scanf("%d", &N);
    
    int years = N / 365;
    int months = (N % 365) / 30;
    int days = (N % 365) % 30;
    
    printf("%d\n", years);
    printf("%d\n", months);
    printf("%d\n", days);
    
    return 0;
}