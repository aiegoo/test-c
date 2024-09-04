#include <stdio.h>

int main() {
  #include <stdio.h>
  
  int main() {
    // Define character arrays
    char a[] = "qwer";  // Array a contains "qwer"
    char b[] = "qwtety"; // Array b contains "qwtety"
  
    // Print the elements of the arrays
    printf("%s\n", a); // Output: qwer
    printf("%s\n", b); // Output: qwtety
  
    // Compare the characters at each index of the arrays
    int i, j; // Declare loop variables i and j
    for (i = 0, j = 0; a[i] != '\0' && b[j] != '\0'; i++, j++) {
      // Loop through both arrays until the end of either array is reached
      // Compare the characters at the same index
      if (a[i] == b[j]) {
        printf("Characters at index %d are equal: %c\n", i, a[i]);
        // If characters are equal, print the index and character
        // Example output: Characters at index 0 are equal: q
      } else {
        printf("Characters at index %d are not equal: %c and %c\n", i, a[i], b[j]);
        // If characters are not equal, print the index and both characters
        // Example output: Characters at index 2 are not equal: e and t
      }
    }
  
    return 0;
  }

  return 0;
}
