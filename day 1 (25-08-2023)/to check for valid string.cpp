#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValidString(const char *str) {
    if (strlen(str) == 0) {
        return false;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            return false;
        }
    }

    return true;
}

int main() {
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = '\0';

    if (isValidString(input)) {
        printf("The string is valid.\n");
    } else {
        printf("The string is not valid.\n");
    }

    return 0;
}

