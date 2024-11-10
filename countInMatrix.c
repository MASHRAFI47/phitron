#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, m, x;
    scanf("%d %d %d", &n, &m, &x);
    int arr[n][m], Numbers[x], freq[1005] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int k = 0; k < x; k++) {
        scanf("%d\n", &Numbers[k]);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (Numbers[k] == arr[i][j]) {
                    freq[k]++;
                }
            }
        }
        printf("%d\n", freq[k]);
    } 
    return 0;
}
