#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i, j, is_palindrome = 1;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    for (i = 0, j = len - 1; i < len / 2; i++, j--) {
        if (str[i] != str[j]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) {
        printf("The string is a palindrome");
    }
    else {
        printf("The string is not a palindrome");
    }

    return 0;
}
