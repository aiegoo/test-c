#include <stdio.h>

int main() {
    int ary[3]; // Declare an array of 3 integers
    int s = 0;  // Initialize sum variable to 0

    *(ary + 0) = 1; // Set the first element of the array to 1
    // ary[0] = 1

    ary[1] = *(ary + 0) + 2; // Set the second element to the first element + 2
    // ary[1] = 1 + 2 = 3

    ary[2] = *ary + 3; // Set the third element to the first element + 3
    // ary[2] = 1 + 3 = 4

    for (int i = 0; i < 3; i++) // Loop through the array
        s = s + ary[i]; // Add each element to the sum
        // Iteration 1: s = 0 + 1 = 1
        // Iteration 2: s = 1 + 3 = 4
        // Iteration 3: s = 4 + 4 = 8

    printf("%d", s); // Print the sum
    // Output: 8

    return 0;
}
