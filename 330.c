#include <stdio.h>   // Include the standard input/output library
#include <ctype.h>   // Include the character type library for character classification functions

int main() {
  char *p = "It is 8";   // Initialize a string pointer to "It is 8"
  char result[100];      // Declare a character array to store the result
  int i;                 // Declare an integer variable for the loop index

  // Loop through each character in the string until the null terminator is reached
  for(i = 0; p[i] != '\0'; i++) {
    // Check if the character is an uppercase letter
    if(isupper(p[i])) {
      // Shift the uppercase letter by 5 positions in the alphabet, wrapping around if necessary
      result[i] = (p[i] - 'A' + 5) % 25 + 'A';
    }
    // Check if the character is a lowercase letter
    else if(islower(p[i])) {
      // Shift the lowercase letter by 10 positions in the alphabet, wrapping around if necessary
      result[i] = (p[i] - 'a' + 10) % 26 + 'a';
    }
    // Check if the character is a digit
    else if(isdigit(p[i])) {
      // Shift the digit by 3 positions, wrapping around if necessary
      result[i] = (p[i] - '0' + 3) % 10 + '0';
    }
    // If the character is not an uppercase letter, lowercase letter, or digit
    else if(!(isupper(p[i]) || islower(p[i]) || isdigit(p[i]))) {
      // Copy the character as is
      result[i] = p[i];
    }
  }
  result[i] = '\0';   // Null-terminate the result string

  // Print the transformed string
  printf("변환된 문자열: %s\n", result);

  return 0;   // Return 0 to indicate successful execution
}

// The program defines a main function that transforms a given string based on the character type. It shifts uppercase letters by 5 positions, lowercase letters by 10 positions, and digits by 3 positions in the alphabet or numerical sequence, wrapping around if necessary. Other characters are copied as is. The transformed string is then printed to the console. The return 0; statement indicates successful execution.
// initial
// It is 8
// transformed
//'I' (uppercase): Shifted by 5 positions -> 'N'
// 't' (lowercase): Shifted by 10 positions -> 'd'
// ' ' (space): Remains unchanged -> ' '
// 'i' (lowercase): Shifted by 10 positions -> 's'
// 's' (lowercase): Shifted by 10 positions -> 'c'
// ' ' (space): Remains unchanged -> ' '
// '8' (digit): Shifted by 3 positions -> '1'
// The transformed string is "Nds c1".
