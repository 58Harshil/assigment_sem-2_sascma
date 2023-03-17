#include <stdio.h>

void replace_odd_with_position(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (i % 2 == 0) {
            printf("%d", i+1);
        } else {
            printf("%c", str[i]);
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Input: %s\n", str);
    printf("Output: ");
    replace_odd_with_position(str);
    return 0;
}
