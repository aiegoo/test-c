#include <stdio.h>  // Include the standard input/output library

main() {  // Main function where the program starts execution
    int c = 1;  // Declare and initialize an integer variable 'c' to 1

    switch (3) {  // Start a switch statement, using the value 3 as the case selector
        case 1: c += 3;  // If case is 1, add 3 to 'c'. No break here, so it will continue to the next case
        case 2: c++;     // If case is 2, increment 'c' by 1. No break here, so it will continue to the next case
        case 3: c = 0;   // Since case is 3 (this matches the switch value), set 'c' to 0. No break here either, so it will continue
        case 4: c += 3;  // Since no break from previous case, this line is executed. Add 3 to 'c'. Now 'c' becomes 3
        case 5: c -= 10; // Again, no break, so subtract 10 from 'c'. Now 'c' becomes -7
        default: c--;    // Since no break, execute the default case. Decrement 'c' by 1. Now 'c' becomes -8
    }

    printf("%d", c);  // Print the final value of 'c', which is -8
}

/*
Key Concepts:

    1.	Switch Statement:
    •	The switch evaluates the expression (3) and tries to match it with one of the case labels.
    •	When a match is found (case 3 in this case), execution begins there, and it will continue through the subsequent cases unless a break statement is encountered.
    •	Since no break statements are present, execution “falls through” all subsequent cases.
    2.	Default Case:
    •	The default case is executed because there is no break statement stopping the execution before reaching it.
    3.	Final Value of c:
    •	After all the operations, the final value of c is -8 which is printed.

the changes to the variable c at each step of the switch statement:

Initial value of c: c = 1

Switch statement starts with case 3:

case 3: c = 0 (since the switch value is 3, this case matches and c is set to 0)
case 4: c += 3 (no break, so this line is executed next, c becomes 0 + 3 = 3)
case 5: c -= 10 (no break, so this line is executed next, c becomes 3 - 10 = -7)
default: c-- (no break, so this line is executed next, c becomes -7 - 1 = -8)
So, the changes to c at each step are:

Initial: c = 1
case 3: c = 0
case 4: c = 3
case 5: c = -7
default: c = -8
Final value of c is -8.

Output:

-8

*/