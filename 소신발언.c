#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    fgets(input, 100, stdin);
    if (strcmp(input, "깃헙이 장난이냐?\n") == 0) {
        printf("네\n");
    }
    return 0;
}