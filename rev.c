#include <stdio.h>

void reverse() {
    int num, rev_num = 0, remainder;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        rev_num = rev_num * 10 + remainder;
        num /= 10;
    }

    printf("The reversed number is %d\n", rev_num);

//    return 0;
}
