#include <stdio.h>

// Function to perform bubble sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int a[] = {85, 75, 50, 100, 95};
    int nx = 5;

    printf("Original array: \n");
    printArray(a, nx);

    // Call bubbleSort to sort the array
    bubbleSort(a, nx);

    printf("Sorted array: \n");
    printArray(a, nx);

    return 0;
}
