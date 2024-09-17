#include <stdio.h> // Include the standard input-output library
#define s 6


void bubble_sort (int list[]) {
  int j, k, p, tmp;
  for (j = 1; j < s; j++) {
    for (k = 0; k < s - j; k++) {
      if (list[k] > list[k + 1]) {
        tmp = list[k];
        list[k] = list[k + 1];
        list[k + 1] = tmp;
      }
      for (p = 0; p < s; p++) {
        printf("%d ", list[p]);
      }
      printf("\n");
    }
  }
}

main() {
  int list[s] = {9, 4, 3, 6, 8, 1};
  int i;
  for (i = 0; i < s; i++) {
    printf("%d ", list[i]);
  printf("\n");
  }
  bubble_sort(list);
  for (i = 0; i < s; i++) {
    printf("%d ", list[i]);
}
    }
// The program defines a bubble sort algorithm to sort an array of integers in ascending order.

#include <stdio.h> // Include the standard input-output library

#define s 6 // Define a constant 's' with value 6, representing the size of the array

// Function to perform bubble sort on an array
void bubble_sort (int list[]) {
  int j, k, p, tmp; // Declare integer variables for loop counters and a temporary variable for swapping
  for (j = 1; j < s; j++) { // Outer loop runs from 1 to s-1
    for (k = 0; k < s - j; k++) { // Inner loop runs from 0 to s-j-1
      if (list[k] > list[k + 1]) { // If the current element is greater than the next element
        tmp = list[k]; // Swap the elements
        list[k] = list[k + 1];
        list[k + 1] = tmp;
      }
      for (p = 0; p < s; p++) { // Print the array after each swap
        printf("%d ", list[p]);
      }
      printf("\n"); // Print a newline after printing the array
    }
  }
}

// Main function
main() {
  int list[s] = {9, 4, 3, 6, 8, 1}; // Initialize an array of integers with 6 elements
  int i; // Declare an integer variable for loop counter
  for (i = 0; i < s; i++) { // Loop to print the initial array
    printf("%d ", list[i]);
  printf("\n"); // Print a newline after printing the initial array
  }
  bubble_sort(list); // Call the bubble_sort function to sort the array
  for (i = 0; i < s; i++) { // Loop to print the sorted array
    printf("%d ", list[i]);
  }
  printf("\n"); // Print a newline after printing the sorted array
}

//output
// 9 4 3 6 8 1
// 4 9 3 6 8 1
// 4 3 9 6 8 1
// 3 4 9 6 8 1
// 3 4 6 9 8 1
// 3 4 6 8 9 1
// 3 4 6 8 1 9
// 3 4 6 1 8 9
// 3 4 6 1 8 9
// 3 4 6 1 8 9
// 3 4 6 1 8 9
// 3 4 6 1 8 9
// 3 4 1 6 8 9
// 3 4 1 6 8 9
// 3 1 4 6 8 9
// 1 3 4 6 8 9
// 1 3 4 6 8 9

#include <stdio.h>

// Function to perform bubble sort on array 'a[]'
void align(int a[])
{
  int temp; // Temporary variable used for swapping elements
  // Outer loop: controls the number of passes through the array
  for (int i = 0; i < 4; i++) // Loop will run 4 times, one less than the number of elements (5 - 1)
    // Inner loop: compares adjacent elements and swaps them if necessary
    for (int j = 0; j < 4; j++) // Loop will go through the array, checking adjacent elements
      if (a[j] > a[j + 1])
      {                  // If the current element is greater than the next one, swap them
        temp = a[j];     // Store the current element in 'temp'        for (j = 1; j < s; j++) { // Outer loop runs from 1 to s-1
          for (k = 0; k < s - j; k++) { // Inner loop runs from 0 to s-j-1
            if (list[k] > list[k + 1]) { // If the current element is greater than the next element
              tmp = list[k]; // Swap the elements
              list[k] = list[k + 1];
              list[k + 1] = tmp;
            }
          }
        }
        a[j] = a[j + 1]; // Move the next element into the current element's place
        a[j + 1] = temp; // Move the current element into the next element's place (swap complete)
      }
}

int main()
{
  int a[] = {85, 75, 50, 100, 95}; // Array of 5 integers to be sorted
  align(a);                        // Call the align function (bubble sort) to sort the array
  // Loop to print the sorted array
  for (int i = 0; i < 5; i++)
  {                      // Loop through the array elements
    printf("%d ", a[i]); // Print each element followed by a space
  }
  return 0;
}

/*
Key Concepts:
Bubble Sort:

It works by repeatedly swapping adjacent elements if they are in the wrong order.
This process is repeated until the array is sorted.
The largest elements "bubble up" to the end of the array after each pass.
Outer Loop (for (int i = 0; i < 4; i++)):

This loop controls the number of passes. Since there are 5 elements, the loop runs 4 times (one less than the number of elements).
Inner Loop (for (int j = 0; j < 4; j++)):

In each pass, it compares adjacent elements in the array and swaps them if they are in the wrong order.
It runs 4 times because it compares the current element with the next one (a[j] > a[j + 1]).
Swapping:

The elements are swapped using a temporary variable temp if the current element is greater than the next element.
*/