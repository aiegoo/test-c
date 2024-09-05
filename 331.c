#include <stdio.h>

int main() {
  int n[] = {73, 95, 82};  // Initialize an array with values 73, 95, and 82
  int sum = 0;             // Initialize sum to 0
  for (int i = 0; i < 3; i++)  // Correct condition: i < 3
    sum += n[i];           // Add each element of the array to sum
  switch (sum / 30) {      // Switch based on the sum divided by 30
    case 10:
    case 9:
      printf("A\n");
      break;
    case 8:
      printf("B\n");
      break;
    case 7:
    case 6:
      printf("C\n");
      break;
    default:
      printf("D\n");
      break;
  }
  return 0;
}
// The program defines an array n with three integer elements and initializes it with values 73, 95, and 82. It then calculates the sum of the elements in the array using a for loop. The switch statement is used to determine the grade based on the sum of the elements divided by 30. The program prints the corresponding grade based on the switch cases. However, there are several issues in the code:
// The condition in the for loop should be i < 3 instead of i < n to iterate over the elements of the array.
// The switch cases are missing break statements, causing fall-through behavior. Each case should end with a break statement to prevent execution from falling through to the next case.
// The default case should also include a break statement to prevent further execution after printing "D".
// the output
// B
// C
// D
// 250/30 = 8.3333
