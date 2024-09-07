#include <stdio.h>
#include <stdlib.h>

int
 isWhat [MAX_SIZE];
 int point = -1;

 int isEmpty() {
  if (point == -1) return 1;
  return 0;
 }

 int isFull() {
  if (point == 10) return 1;
  return 0;
 }

 void into(int num)  {
  if (isFull() == 1) printf("full");
  else isWhat[++point] = num;
 }
 int take() {
  if (isEmpty() == 1) printf("empty");
  else return isWhat[point--];
 }

main() {
  into(5); into(2);
  while (!isEmpty()) {
    printf("%d\n", take());
    into(4); into(1); printf("%d", take());
    into(3); printf("%d", take(); printf("%d", take());
    into(6); printf("%d", take());printf("%d", take());
  }
}

//output
// 5
// 2
// 4
// 1
// 3
// 6
//
// The program defines a stack data structure using an array and implements the push and pop operations.
// The stack has a maximum size of 10 elements and is initialized with a pointer `point` set to -1.
// The `isEmpty` function checks if the stack is empty by comparing the pointer `point` with -1.
// The `isFull` function checks if the stack is full by comparing the pointer `point` with 10.
// The `into` function pushes an element onto the stack if the stack is not full.
// The `take` function pops an element from the stack if the stack is not empty.
// In the `main` function, elements 5 and 2 are pushed onto the stack using the `into` function.
// The program then enters a loop that continues until the stack is empty.
// Inside the loop, elements are pushed and popped from the stack in a specific order.
// The output of the program is the elements popped from the stack in the order they are processed.


#include <stdio.h> // Include the standard input-output library

#define MAX 10 // Define the maximum size of the stack

int isWhat[MAX]; // Declare an array to hold the stack elements
int point = -1; // Initialize the stack pointer to -1, indicating an empty stack

// Function to check if the stack is empty
int isEmpty() {
  return point == -1; // Return 1 if the stack is empty, otherwise return 0
}

// Function to check if the stack is full
int isFull() {
  return point == MAX - 1; // Return 1 if the stack is full, otherwise return 0
}

// Function to push an element onto the stack
void into(int num) {
  if (isFull() == 1) // Check if the stack is full
    printf("full"); // Print "full" if the stack is full
  else
    isWhat[++point] = num; // Increment the pointer and add the element to the stack
}

// Function to pop an element from the stack
int take() {
  if (isEmpty() == 1) // Check if the stack is empty
    printf("empty"); // Print "empty" if the stack is empty
  else
    return isWhat[point--]; // Return the top element and decrement the pointer
}

// Main function
int main() {
  into(5); // Push 5 onto the stack
  into(2); // Push 2 onto the stack
  while (!isEmpty()) { // Loop until the stack is empty
    printf("%d\n", take()); // Pop and print the top element
    into(4); // Push 4 onto the stack
    into(1); // Push 1 onto the stack
    printf("%d", take()); // Pop and print the top element
    into(3); // Push 3 onto the stack
    printf("%d", take()); // Pop and print the top element
    printf("%d", take()); // Pop and print the top element
    into(6); // Push 6 onto the stack
    printf("%d", take()); // Pop and print the top element
    printf("%d", take()); // Pop and print the top element
  }
  return 0; // Return 0 to indicate successful execution
}
//   
//   
//   The program defines a stack data structure using an array and implements the push and pop operations. Here's a step-by-step breakdown of the execution:
//   Initialization:
//   
//   The stack is initialized with a maximum size of 10 elements.
//   The pointer point is set to -1, indicating an empty stack.
//   
//   Push Operations:
//   
//   into(5) pushes 5 onto the stack.
//   into(2) pushes 2 onto the stack.
//   Loop Execution:
//   
//   The program enters a loop that continues until the stack is empty.
//   take() pops and prints the top element (2).
//   into(4) pushes 4 onto the stack.
//   into(1) pushes 1 onto the stack.
//   take() pops and prints the top element (1).
//   into(3) pushes 3 onto the stack.
//   take() pops and prints the top element (3).
//   take() pops and prints the top element (4).
//   into(6) pushes 6 onto the stack.
//   take() pops and prints the top element (6).
//   take() pops and prints the top element (5).
//   
