#include <stdio.h>

int is_uppercase(char c) {
    if(c >= 'A' && c <= 'Z') {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char c = 'S';
    int result = is_uppercase(c);
    printf("Result: %d\n", result);
    return 0;
}
