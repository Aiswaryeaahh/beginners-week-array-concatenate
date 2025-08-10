#include <stdio.h>

int main() {
    int size1, size2;

    // Get size of first array
    printf("Enter size of first array: ");
    scanf("%d", &size1);
    int arr1[size1];

    // Get elements of first array
    printf("Enter %d elements for first array:\n", size1);
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Get size of second array
    printf("Enter size of second array: ");
    scanf("%d", &size2);
    int arr2[size2];

    // Get elements of second array
    printf("Enter %d elements for second array:\n", size2);
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Create result array
    int result[size1 + size2];

    // Copy arr1 to result
    for (int i = 0; i < size1; i++) {
        result[i] = arr1[i];
    }

    // Copy arr2 to result
    for (int i = 0; i < size2; i++) {
        result[size1 + i] = arr2[i]; //inserts the elements after the first array
    }

    // Display concatenated array
    printf("\nConcatenated Array: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}

