#include <stdio.h>

int main() {
    int num1;
    int num2;

    printf("Please, type the first number: ");
    scanf("%d", &num1);

    printf("Type the second number: ");
    scanf("%d", &num2);

    int result = num1 * num2;

    printf("\nThe product of %d times %d is: %d\n", num1, num2, result);

    return 0;
}