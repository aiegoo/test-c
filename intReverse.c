#include <stdio.h>

int main() {
  int number = 1234;
  int div = 10;
  int result = 0;

  while (number > 0) {
    int digit = number % div;
    result = (result * 10) + digit;
    number = number / div;

    printf("number: %d, div: %d, result: %d\n", number, div, result);
  }

  printf("Reversed number: %d\n", result);

  return 0;
}
