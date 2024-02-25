#include <stdio.h>

int main() {
    int listSize;

    printf("What will be the size of the list?: ");
    scanf("%d", &listSize);

    int orderedNumberList[listSize];
    for(int i = 0; i <= listSize - 1; i++) {
        orderedNumberList[i] = i + 1;
    }

    int targetNumber;
    printf("What number do you want to search in the array?: ");
    scanf("%d", &targetNumber);

    int low = 1;
    int middle;
    int high = listSize;

    while(low <= high) {
        middle = (low + high) / 2;

        if(middle == targetNumber) {
            printf("\nThe index of the target number is %d\n", middle - 1);
            printf("Test: %d\n", orderedNumberList[middle-1]);
            return 0;
        }

        if(middle < targetNumber) {
            low = middle + 1;
        } else {
            high = middle - 1;
        }
    }
}