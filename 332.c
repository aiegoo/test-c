#include <stdio.h>

main() {
  int E[] = { 64, 25, 12, 22, 11 };  // Initialize array E with 5 elements
  int n = sizeof(E) / sizeof(E[0]);  // Calculate the number of elements in E
  int i = 0;  // Initialize i to 0
  do {
    int j = i + 1;  // Initialize j to i + 1
    do {
      if (E[i] > E[j]) {  // If element at i is greater than element at j
        int temp = E[i];  // Swap E[i] and E[j]
        E[i] = E[j];
        E[j] = temp;  // Corrected the syntax error here
      }
      j++;  // Increment j
    } while (j < n);  // Continue while j is less than n
    i++;  // Increment i
  } while (i < n - 1);  // Continue while i is less than n - 1

  for (int i = 0; i < 4; i++)  // Loop to print the first 4 elements of the sorted array
    printf("%d ", E[i]);  // Print each element followed by a space
}
// Output: 11 12 22 25
// The program initializes an integer array E with 5 elements and calculates the number of elements in the array. It then uses a nested do-while loop to perform a bubble sort on the array, sorting the elements in ascending order. The program prints the first 4 elements of the sorted array to the console. The output is the sorted elements 11, 12, 22, and 25, separated by spaces. The program is correct and functional, displaying the expected output without errors or issues. The return 0; statement is not required in this case.
// Calculate Number of Elements:

// int n = sizeof(E) / sizeof(E[0]); calculates the number of elements in the array E.
// Print Sorted Array:

// for (int i = 0; i < 4; i++) loops through the first 4 elements of the sorted array.
// printf("%d ", E[i]); prints each element followed by a space.
