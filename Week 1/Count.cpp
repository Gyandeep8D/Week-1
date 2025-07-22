#include <stdio.h>

int main() {
    int n, num;
    int positive = 0, negative = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num > 0) {
            positive++;
        } else if (num < 0) {
            negative++;
        }
    }

    printf("Total positive numbers: %d\n", positive);
    printf("Total negative numbers: %d\n", negative);

    return 0;
}

