#include <stdio.h>

int main() { // Start of main function
    int k = 2, j;  // Declare two integer variables: k is initialized to 2, j will be used in the inner loop
    while(1) { // Infinite loop that will run until manually stopped with a break statement
        j = 2;  // Each time the outer loop starts, initialize j to 2
        // Inner loop: increments j until we find a divisor of k or j becomes equal to k
        while (k % j != 0) // This loop runs as long as k is not divisible by j (remainder is not zero)
            j++;  // Increment j to check the next potential divisor
        // If k is equal to j after the inner loop, k is a prime number (because it is only divisible by 1 and itself)
        if (k == j)  
            printf("%d ", k);  // Print k, since it is prime
        // Increment k until it reaches 7, at which point the loop will stop
        if (k < 7)  
            k++;  // Increase k by 1
        else
            break;  // Break out of the infinite loop once k reaches 7
    }
    return 0;  // End of the main function
}

/*
### Explanation of Logic:
- The program is designed to find and print **prime numbers** between 2 and 7.
- **Prime number**: A number that is divisible only by 1 and itself. The code checks for prime numbers by attempting to divide `k` by every integer `j` from 2 up to `k`.

### Detailed Execution:

1. **First Iteration (k = 2):**
   - `j = 2`, check `k % j == 0` (2 % 2 == 0), condition is true, so the inner loop stops.
   - Since `k == j` (2 == 2), `k` is prime. The program prints `2`.
   - `k` is incremented to `3`.

2. **Second Iteration (k = 3):**
   - `j = 2`, check `k % j == 0` (3 % 2 != 0), so `j++` becomes `3`.
   - Now, check `k % j == 0` (3 % 3 == 0), condition is true, inner loop stops.
   - Since `k == j` (3 == 3), `k` is prime. The program prints `3`.
   - `k` is incremented to `4`.

3. **Third Iteration (k = 4):**
   - `j = 2`, check `k % j == 0` (4 % 2 == 0), condition is true, inner loop stops.
   - Since `k != j` (4 != 2), `k` is **not prime**, so nothing is printed.
   - `k` is incremented to `5`.

4. **Fourth Iteration (k = 5):**
   - `j = 2`, check `k % j == 0` (5 % 2 != 0), `j++` becomes `3`.
   - Check `k % j == 0` (5 % 3 != 0), `j++` becomes `4`.
   - Check `k % j == 0` (5 % 4 != 0), `j++` becomes `5`.
   - Now, check `k % j == 0` (5 % 5 == 0), condition is true, inner loop stops.
   - Since `k == j` (5 == 5), `k` is prime. The program prints `5`.
   - `k` is incremented to `6`.

5. **Fifth Iteration (k = 6):**
   - `j = 2`, check `k % j == 0` (6 % 2 == 0), condition is true, inner loop stops.
   - Since `k != j` (6 != 2), `k` is **not prime**, so nothing is printed.
   - `k` is incremented to `7`.

6. **Sixth Iteration (k = 7):**
   - `j = 2`, check `k % j == 0` (7 % 2 != 0), `j++` becomes `3`.
   - Check `k % j == 0` (7 % 3 != 0), `j++` becomes `4`.
   - Check `k % j == 0` (7 % 4 != 0), `j++` becomes `5`.
   - Check `k % j == 0` (7 % 5 != 0), `j++` becomes `6`.
   - Check `k % j == 0` (7 % 6 != 0), `j++` becomes `7`.
   - Now, check `k % j == 0` (7 % 7 == 0), condition is true, inner loop stops.
   - Since `k == j` (7 == 7), `k` is prime. The program prints `7`.
   - Now `k` is equal to 7, the program breaks out of the infinite loop.

### Output:
```
2 3 5 7 
```

### Notes:
- **Outer `while(1)` loop**: Keeps running until `k` reaches 7, then the `break` statement stops it.
- **Prime number check**: The inner loop checks if `k` can be divided by any number `j` from 2 to `k-1`. If not, then `k` is prime.
- **Increment of `k`**: The value of `k` is incremented by 1 each time, and the process repeats until the loop is broken at `k = 7`.

*/