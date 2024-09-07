#include <stdio.h>

main() {
  int numAry[] = {0, 0, 0, 0, 3 };
  int i, j;
  for (j = 4; j >= 0; --j)
    for (i = 4; i > j; --i)
      numAry[j] += numAry[i];
  for (j = 0; j < 5; ++j)
    printf("%d ", numAry[j]);

}

//output
// 24 12 6 3 3
#include <stdio.h> // Include the standard input-output library

int main() { // Define the main function
  int numAry[] = {0, 0, 0, 0, 3}; // Initialize an array with 5 elements
  int i, j; // Declare integer variables i and j

  // Loop through the array from the last element to the first
  for (j = 4; j >= 0; --j) {
    // Loop through the array from the last element to the element after j
    for (i = 4; i > j; --i) {
      numAry[j] += numAry[i]; // Add the value of numAry[i] to numAry[j]
    }
  }

  // Loop through the array and print each element
  for (j = 0; j < 5; ++j) {
    printf("%d ", numAry[j]); // Print the value of numAry[j]
  }

  return 0; // Return 0 to indicate successful execution
}


Explanation of the Code
Include the Standard Input-Output Library:

#include <stdio.h>: This line includes the standard input-output library, which is necessary for using functions like printf.
Main Function:

int main() {: This line defines the main function, which is the entry point of the program.
Initialize the Array:

int numAry[] = {0, 0, 0, 0, 3};: This line initializes an array called numAry with 5 elements: {0, 0, 0, 0, 3}.
Declare Variables:

int i, j;: This line declares two integer variables, i and j.
Outer Loop:

for (j = 4; j >= 0; --j) {: This line starts a loop that iterates from the last element of the array to the first element.
Inner Loop:

for (i = 4; i > j; --i) {: This line starts a nested loop that iterates from the last element of the array to the element after j.
numAry[j] += numAry[i];: This line adds the value of numAry[i] to numAry[j].
Print the Array:

for (j = 0; j < 5; ++j) {: This line starts a loop that iterates through each element of the array.
printf("%d ", numAry[j]);: This line prints the value of numAry[j].
Return Statement:

return 0;: This line returns 0 to indicate successful execution of the program.
Explanation of the Output
Let's go through the loops step-by-step to understand how the array numAry is modified:

Initial Array:

numAry = {0, 0, 0, 0, 3}
First Iteration (j = 4):

Inner loop does not execute because i > j is false.
Second Iteration (j = 3):

i = 4: numAry[3] += numAry[4] → numAry[3] = 0 + 3 = 3
numAry = {0, 0, 0, 3, 3}
Third Iteration (j = 2):

i = 4: numAry[2] += numAry[4] → numAry[2] = 0 + 3 = 3
i = 3: numAry[2] += numAry[3] → numAry[2] = 3 + 3 = 6
numAry = {0, 0, 6, 3, 3}
Fourth Iteration (j = 1):

i = 4: numAry[1] += numAry[4] → numAry[1] = 0 + 3 = 3
i = 3: numAry[1] += numAry[3] → numAry[1] = 3 + 3 = 6
i = 2: numAry[1] += numAry[2] → numAry[1] = 6 + 6 = 12
numAry = {0, 12, 6, 3, 3}
Fifth Iteration (j = 0):

i = 4: numAry[0] += numAry[4] → numAry[0] = 0 + 3 = 3
i = 3: numAry[0] += numAry[3] → numAry[0] = 3 + 3 = 6
i = 2: numAry[0] += numAry[2] → numAry[0] = 6 + 6 = 12
i = 1: numAry[0] += numAry[1] → numAry[0] = 12 + 12 = 24
numAry = {24, 12, 6, 3, 3}
