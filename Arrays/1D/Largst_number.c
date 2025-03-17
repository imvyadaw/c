// ---IM_VYADAW------
#include <stdio.h>

int main() {
    int arr[5] = {3, 8, 15, 2, 9};
    int max = arr[0]; // Assume first element is the largest

    for (int i = 1; i < 5; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    printf("Largest number: %d\n", max);
    return 0;
}
