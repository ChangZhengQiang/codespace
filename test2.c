


#include <stdio.h>
#include <string.h>

void escape(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == ' ') {
            str[i] = '_';
        }
    }
}

void unescape(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] == '_') {
            str[i] = ' ';
        }
    }
}

int main() {
    char str[] = "Hello World";
    printf("Original string: %s\n", str);
    escape(str);
    printf("Escaped string: %s\n", str);
    unescape(str);
    printf("Unescaped string: %s\n", str);
    return 0;
}





