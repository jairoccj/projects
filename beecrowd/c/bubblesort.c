#include <stdio.h>

int main() {
    int num[3];
    
    // Input
    for (int i = 0; i < 3; i++) {
        scanf("%d", &num[i]);
    }

    // Bubble Sort
    for (int i = 0; i < 2; i++) { // 3 elements -> 2 passes
        for (int j = 0; j < 2 - i; j++) {
            if (num[j] > num[j + 1]) {
                // Swap num[j] and num[j+1]
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    // Output: Sorted array
    printf("Sorted:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d\n", num[i]);
    }

    // Output: Original order (optional - only if stored elsewhere)
    // Otherwise original order is lost unless you duplicate it first.

    return 0;
}