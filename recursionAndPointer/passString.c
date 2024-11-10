#include <stdio.h>
#include <string.h>

void fun(char name[]) {
    printf("%s", name);
}

int main() {
    char name[] = "Programming";

    fun(name);

    return 0;
}