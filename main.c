#include <stdio.h>

int main() {
    int n, target, found = 0;

    // Read the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Define an array of size n

    printf("Enter %d elements: ", n);

    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the target element to search for
    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Search for the target element in the array
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Element %d found at position %d.\n", target, i + 1);
            found = 1; // Mark that the element was found
            break;
        }
    }

    // If the element is not found
    if (!found) {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
