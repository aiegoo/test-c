#include <stdio.h> // Include the standard input-output library

int isPrime(int number) {
  for (int i = 2; i < number; i++) {
    if (number % i == 0) {
      return 0; // Not prime
    }
  }
  return 1; // Prime
}

int main() {
  int number = 13195;
  int max_div = 0;
  for (int i = 2; i <= number; i++) {
    if (isPrime(i) == 1 && number % i == 0) max_div = i;
  }
  printf("%d\n", max_div);
  return 0;
}
//output
// 13195's prime number is 29

#include <stdio.h> // Include the standard input-output library

// Function to check if a number is prime
int isPrime(int number) {
  if (number <= 1) return 0; // Numbers less than or equal to 1 are not prime
  for (int i = 2; i * i <= number; i++) { // Loop from 2 to the square root of the number
    if (number % i == 0) {
      return 0; // Not prime if divisible by any number other than 1 and itself
    }
  }
  return 1; // Prime if no divisors found
}

int main() {
  int number = 13195; // Initialize the number to find the largest prime factor of
  int max_div = 0; // Initialize the maximum divisor to 0
  for (int i = 2; i <= number; i++) { // Loop from 2 to the number
    if (isPrime(i) == 1 && number % i == 0) { // Check if `i` is a prime factor of `number`
      max_div = i; // Update the maximum divisor
    }
  }
  printf("%d\n", max_div); // Print the largest prime factor
  return 0; // Return 0 to indicate successful execution
}
// The program finds the largest prime factor of a given number.
// The `isPrime` function checks if a number is prime by iterating from 2 to the square root of the number.
// If the number is divisible by any integer in this range, it is not prime.
// The `main` function initializes the number to find the largest prime factor of and the maximum divisor to 0.
// It then loops from 2 to the number, checking if each number is a prime factor of the given number.
// If a prime factor is found, it updates the maximum divisor.
// Finally, it prints the largest prime factor to the console.
// The program terminates after printing the result.
// The return 0; statement in the `main` function indicates successful execution.
// The largest prime factor of 13195 is 29.
