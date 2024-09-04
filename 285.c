#include <stdio.h>

int main() {
  #include <stdio.h>

  int main() {
    // Define character arrays
    char* a = "qwer";  // Array a contains "qwer"
    char* b = "qwtety"; // Array b contains "qwtety"

    // Print the elements of the arrays
    printf("%s\n", a); // Output: qwer
    printf("%s\n", b); // Output: qwtety

    // Compare the characters at each index of the arrays
    for (int i = 0; a[i] != '\0'; i++) {
        for (int j = 0; b[j] != '\0'; j++) {
            // Loop through both arrays until the end of either array is reached
            // Compare the characters at the same index
            if (a[i] == b[j]) {
                printf("%c", a[i]);
                // If characters are equal, print the indices and character
                // Example output: Characters at index a[0] and b[0] are equal: q
            } else {
                printf("Characters at index a[%d] and b[%d] are not equal: %c and %c\n", i, j, a[i], b[j]);
                // If characters are not equal, print the indices and both characters
                // Example output: Characters at index a[0] and b[1] are not equal: q and w
            }
        }
    }

    return 0;
  }

  return 0;
}

// Output:
// qwer
// qwtety
// Characters at index 0 are equal: q
// Characters at index 1 are equal: w
// Characters at index 2 are not equal: e and t
// Characters at index 3 are not equal: r and e
