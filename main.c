#include <stdio.h>

int main() {
    int sum, start, finish;
    int total = 0;

    printf("Enter the start point: ");
    scanf("%d", &start);

    printf("Enter the finish point: ");
    scanf("%d", &finish);

    for (sum = start; sum <= finish; ++sum) {
        total = total + sum;
    }

    printf("total is: %d", total);

    return 0;
}