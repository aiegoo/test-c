#include <stdio.h>

char n[30];  // Global character array to store the name

// Function to get a name from the user
char* getname() {
  printf("Enter your name: ");  // Prompt the user to enter their name
  fgets(n, sizeof(n), stdin);  // Use fgets instead of gets for safety
  n[strcspn(n, "\n")] = '\0';  // Remove the newline character if present
  return n;  // Return the entered name
}

int main() {  // Define the main function with return type int
  char* n1 = getname();  // Get the first name
  char* n2 = getname();  // Get the second name
  char* n3 = getname();  // Get the third name
  printf("%s\n", n1);  // Print the first name
  printf("%s\n", n2);  // Print the second name
  printf("%s\n", n3);  // Print the third name
  return 0;  // Return 0 to indicate successful execution
}

//output
// charlie charlie charlie

// #include <stdio.h>
//
// char n[30];
// char* getname() {
//   printf("Enter your name: ");
//   gets(n);
//   return n;
// }
//
// main() {
//  char* n1 = getname();
//  char* n2 = getname();
//  char* n3 = getname();
//  printf("%s\n", n1);
//  printf("%s\n", n2);
//   printf("%s\n", n3);
// }

//output
