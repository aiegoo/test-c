#include <stdio.h> // Include the standard input-output library for functions like printf() and scanf()

main() {
  int i, a[5], cnt = 0;  // Declare three variables: i (loop counter), a[5] (an array to store 5 integers), and cnt (counter initialized to 0 for counting even numbers)
  
  // First loop: Take 5 inputs from the user and store them in the array a[]
  for (i = 0; i < 5; i++) {  // Loop runs 5 times, as i is incremented from 0 to 4
    scanf("%d", &a[i]);  // Input an integer from the user and store it in a[i]
  }
  
  // Second loop: Check each element in the array to see if it's an even number
  for (i = 0; i < 5; i++) {  // Again, loop runs 5 times, checking all elements in the array
    if (a[i] % 2 == 0) {  // Check if the current element a[i] is even (divisible by 2 with no remainder)
      cnt = cnt + 1;  // If a[i] is even, increment the counter cnt by 1
    }
    printf("짝수의 개수: %d\n", cnt);  // Print the current count of even numbers after each iteration
  }
}

/*
### Explanation of Logic:
- The program takes **5 integer inputs** from the user.
- It then checks each number to see if it is **even** (i.e., divisible by 2).
- If a number is even, it increments the `cnt` variable, which counts how many even numbers have been entered.
- After checking each number, it prints the current count of even numbers (`cnt`).

### Detailed Execution:

1. **Initial State:**
   - `i = 0`, `cnt = 0`, and the array `a[5]` is uninitialized.
   
2. **Input Phase:**
   - The first `for` loop runs, asking the user to input 5 numbers:
   - Example input: `2 5 6 7 8`
   - After the loop, the array `a` looks like this:
     - `a[0] = 2`
     - `a[1] = 5`
     - `a[2] = 6`
     - `a[3] = 7`
     - `a[4] = 8`
   
3. **Checking Even Numbers:**
   - The second `for` loop starts, and each element of `a` is checked to see if it's even:
   
   **First Iteration (`i = 0`):**
   - Check `a[0] = 2`: Since `2 % 2 == 0`, `cnt` is incremented to 1.
   - Output: `짝수의 개수: 1`
   
   **Second Iteration (`i = 1`):**
   - Check `a[1] = 5`: Since `5 % 2 != 0`, `cnt` remains 1.
   - Output: `짝수의 개수: 1`
   
   **Third Iteration (`i = 2`):**
   - Check `a[2] = 6`: Since `6 % 2 == 0`, `cnt` is incremented to 2.
   - Output: `짝수의 개수: 2`
   
   **Fourth Iteration (`i = 3`):**
   - Check `a[3] = 7`: Since `7 % 2 != 0`, `cnt` remains 2.
   - Output: `짝수의 개수: 2`
   
   **Fifth Iteration (`i = 4`):**
   - Check `a[4] = 8`: Since `8 % 2 == 0`, `cnt` is incremented to 3.
   - Output: `짝수의 개수: 3`

### Final Output:
```
짝수의 개수: 1
짝수의 개수: 1
짝수의 개수: 2
짝수의 개수: 2
짝수의 개수: 3
```

### Issues:
- The `printf` statement is inside the loop, so the output is printed after each number is checked. This is why the program outputs the current count after every iteration.
- If you want the final count of even numbers to be printed **once**, the `printf` statement should be placed **after** the second loop, like this:

```c
for (i = 0; i < 5; i++) {
  if (a[i] % 2 == 0) {
    cnt = cnt + 1;
  }
}
printf("짝수의 개수: %d\n", cnt);
```

### Corrected Final Output (with updated code):
```
짝수의 개수: 3
```
*/