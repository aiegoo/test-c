#include <stdio.h>

int main() {
  int n[] = { 5, 4, 3, 2, 1 };  // Initialize an array with values 5, 4, 3, 2, 1
  for (int i = 0; i < 5; i++)   // Loop through each element in the array
    printf("%d", n[i + 1] % 5);         // Print each element
  return 0;
}
// Output: 54321
// The program initializes an integer array n with values 5, 4, 3, 2, 1. It then iterates over the array using a for loop and prints each element to the console. The output is the sequence of numbers 5, 4, 3, 2, 1 concatenated together, resulting in "54321". The program is correct and functional, displaying the expected output without errors or issues. The return 0; statement indicates successful execution.
// after n[i + 1] % 5
// 4 % 5 = 4
// 3 % 5 = 3
// 2 % 5 = 2
// 1 % 5 = 1
// 0 % 5 = 0
// 4321 n[5]%5 is undefined(out of bounds access)

// #include <stdio.h>
//
// int main() {
//   int n[] = { 5, 4, 3, 2, 1 };  // Initialize an array with values 5, 4, 3, 2, 1
//   for (int i = 0; i < 4; i++)   // Loop through each element in the array, up to the second last element
//     printf("%d", n[i + 1] % 5); // Print each element
//   return 0;
// }
// 4321
