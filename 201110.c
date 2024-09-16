#include <stdio.h>

main() {
  char* p = "KOREA";
  printf("1. %s\n", p);
  printf("2. %s\n", p + 1);
  printf("3. %c\n", *p); // prints the first character of the string
  printf("4. %c\n", *(p + 3)); // Output: E
  printf("5. %c\n", *p + 4); // Output: K + 4 = O
}

//output
// 1. KOREA
// 2. OREA
// 3. K
// 4. E
// 5. O
// The program defines a character pointer p that points to the string "KOREA". It then demonstrates various pointer arithmetic and dereferencing operations:
// Printing the original string "KOREA" using %s format specifier.
// Printing the string starting from the second character "OREA" by incrementing the pointer p by 1.
// Printing the first character of the string 'K' using the dereference operator *p.
// Printing the character at the fourth position 'E' by dereferencing the pointer p + 3.
// Adding 4 to the character 'K' and printing the result 'O'. This operation is equivalent to 'K' + 4, which results in 'O' based on ASCII values.
// The output demonstrates the behavior of pointer arithmetic and dereferencing in C. The program is correct and functional, displaying the expected output without errors or issues. The return 0; statement is not required in this case.
// The output is the result of various pointer arithmetic and dereferencing operations on the character pointer p. The program is correct and functional, demonstrating the behavior of pointers in C. The return 0; statement is not required in this case.
