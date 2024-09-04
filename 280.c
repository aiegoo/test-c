#include <stdio.h>

int main() {
    int input = 101110; // Binary number
    int di = 1; // Multiplier for the current power of 2
    int sum = 0; // Decimal value accumulator

    while (input != 0) {
        sum += (input % 10) * di; // Add the least significant digit's contribution
        di *= 2; // Move to the next power of 2
        input /= 10; // Remove the least significant digit
    }

    printf("Decimal value: %d\n", sum); // Print the result
    return 0;
}
