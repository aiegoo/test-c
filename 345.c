#include <stdio.h>
int func(int a) {
  if <a <= 1> {
    return 1;
  } else {
    return a * func(a - 1);
  }
}
int main() {
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);
  printf("Factorial of %d is %d\n", a, func(a));
  return 0;
}


#include <stdio.h> // Include the standard input-output library

// Define a function `func` that calculates the factorial of a number `a`
int func(int a) {
  // If `a` is less than or equal to 1, return 1
  if (a <= 1) {
    return 1;
  } else {
    // Otherwise, return `a` multiplied by the factorial of `a-1`
    return a * func(a - 1);
  }
}

int main() {
  int a; // Declare an integer variable `a`
  printf("Enter a number: "); // Prompt the user to enter a number
  scanf("%d", &a); // Read the input number and store it in `a`
  // Print the factorial of the entered number
  printf("Factorial of %d is %d\n", a, func(a));
  return 0; // Return 0 to indicate successful execution
}
Enter a number: 5
Factorial of 5 is 120

// The program calculates the factorial of a given number using a recursive function `func`.
// The `func` function takes an integer `a` as input and returns the factorial of `a`.
// If `a` is less than or equal to 1, the function returns 1.
// Otherwise, the function returns `a` multiplied by the factorial of `a-1
// In the `main` function, the user is prompted to enter a number.
// The input number is read and stored in the variable `a`.
// The factorial of the entered number is calculated using the `func` function and printed to the console.
// The program terminates after printing the result.
// The return 0; statement in the `main` function indicates successful execution.

//        func(5) calls func(4), func(3), func(2), and func(1).
//        func(1) returns 1 because 1 <= 1.
//        func(2) returns 2 * func(1) = 2 * 1 = 2.
//        func(3) returns 3 * func(2) = 3 * 2 = 6.
//        func(4) returns 4 * func(3) = 4 * 6 = 24.
//        func(5) returns 5 * func(4) = 5 * 24 = 120.
//        
