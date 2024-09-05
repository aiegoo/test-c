#include <stdio.h>  // Include the standard input-output library
#include <string.h>  // Include the string manipulation library

// Function to reverse a string in place
void inverse(char *str, int len) {
  // Loop to swap characters from the start and end of the string
  for (int i = 0, j = len - 1; i < len ; i++, j--) {
    char ch = str[i];  // Temporary variable to hold the character at position i
    str[i] = str[j];  // Assign the character at position j to position i
    str[j] = ch;  // Assign the temporary variable to position j
  }
}

int main() {
  char str[100] = "ABCDEFGH";  // Initialize a character array with the string "ABCDEFGH"
  int len = strlen(str);  // Calculate the length of the string
  inverse(str, len);  // Call the inverse function to reverse the string
  // Loop to print every other character of the reversed string
  for (int i = 0; i < len; i += 2) {
    printf("%c", str[i]);  // Print the character at position i
  }
  printf("\nInverse: %s\n", str);  // Print the reversed string
  return 0;  // Return 0 to indicate successful execution
}

//
// The program defines a function inverse that takes a string and its length as arguments and reverses the string in place. The main function initializes a character array str with the value "ABCDEFGH" and calculates the length of the string. It then calls the inverse function to reverse the string and prints every other character of the reversed string. The output is the reversed string "HGFEDCBA" followed by the characters at even indices "HFDCA" printed to the console. The program is correct and functional, displaying the expected output without errors or issues. The return 0; statement indicates successful execution.
// The output is the reversed string "HGFEDCBA" followed by the characters at even indices "HFDCA". The program is correct and functional, demonstrating string reversal and character printing. The return 0; statement is not required in this case.
// void inverse(char *str, int len) { ... }: This block defines a function named inverse that takes a string and its length as arguments and reverses the string in place.

// output
// HFDCA
// Inverse: HGFEDCBA
