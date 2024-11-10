#include <stdio.h>
#include <ctype.h>

void fun(char name[]) {
    name[0] = toupper(name[0]);
    
    printf("%s", name);
}

int main() {
    char name[] = "programming";

    fun(name);

    return 0;
}