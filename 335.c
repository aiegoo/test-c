#include <stdio.h>  // Include the standard input-output library
#include <string.h>  // Include the string manipulation library

// Function to reverse a string in place
void inverse(char *str, int len) {
  // Loop to swap characters from the start and end of the string
  for (int i = 0, j = len - 1; i < len / 2; i++, j--) {
    char ch = str[i];  // Temporary variable to hold the character at position i
    str[i] = str[j];  // Assign the character at position j to position i
    str[j] = ch;  // Assign the temporary variable to position j
  }
}

int main() {
  char str[100] = "ABCDEFGH";  // Initialize a character array with the string "ABCDEFGH"
  int len = strlen(str);  // Calculate the length of the string
  inverse(str, len);  // Call the inverse function to reverse the string
  // Loop to print every other character of the reversed string starting from index 1
  for (int i = 1; i < len; i += 2) {
    printf("%c", str[i]);  // Print the character at position i
  }
  printf("\nInverse: %s\n", str);  // Print the reversed string
  return 0;  // Return 0 to indicate successful execution
}

// void inverse(char *str, int len) { ... }: This block defines a function named inverse that takes a string and its length as arguments and reverses the string in place.
// Specifically, you should start the loop from the second character (index 1) and then print every other character.
// output
// GECA
// Inverse: HGFEDCBA
