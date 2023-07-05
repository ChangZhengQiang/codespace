#include <stdio.h>


#include <string.h>

void escapeWhiteSpace(char* str, char replaceChar) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == ' ') {
            str[i] = replaceChar;
        }
    }
}


void unescapeWhiteSpace(char* str, char replaceChar) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == replaceChar) {
            str[i] = ' ';
        }
    }
}

int main() {
    char str[] = "Hello World!";
    printf("Before escaping: %s\n", str);

    escapeWhiteSpace(str, '_');

    printf("After escaping: %s\n", str);

    unescapeWhiteSpace(str, '_');

    printf("After unescaping: %s\n", str);

    return 0;
}