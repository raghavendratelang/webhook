#include <stdio.h>

void big2() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("%d is bigger than %d", num1, num2);
    }
    else {
        printf("%d is bigger than %d", num2, num1);
    }

  //  return 0;
}
