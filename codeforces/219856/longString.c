// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        char str[10000];
        scanf("%s", str);
        
        int count = 0;
        for(int i = 0; str[i] != '\0'; i++) {
            count++;
        }
        
        int count2 = 0;
        if(count > 10) {
            for(int i = 1; i < count-1; i++) {
                count2++;
            }
        }
        
        
        if(count <= 10) {
            printf("%s\n", str);
        }
        else {
            printf("%c%d%c\n", str[0], count2, str[count-1]);
        }
    }
    
    return 0;
}







// #include <stdio.h>
// #include <string.h>

// int main() {
//     int t;
//     scanf("%d", &t);
    
//     while(t--) {
//         char s[101];
//         scanf("%s", s);
        
//         int n = strlen(s);
        
//         if(n <= 10) {
//             printf("%s\n", s);
//         }
//         else {
//             printf("%c%d%c", s[0], n-2, s[n-1]);
//         }
//     }
// }