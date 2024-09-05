#include <stdio.h>

int main() {
    #include <stdio.h>

    int main() {
        // Define a structure named insa
        struct insa {
          char name[10]; // Character array to store name
          int age;       // Integer to store age
        };

        // Initialize an array of insa structures with initial values
        struct insa a[] = {{"kim", 28}, {"lee", 38}, {"Park", 42}, {"Choi", 31}};
        // a[0] = {"kim", 28}
        // a[1] = {"lee", 38}
        // a[2] = {"Park", 42}
        // a[3] = {"Choi", 31}

        struct insa *p; // Declare a pointer to insa structure
        p = a;          // Point to the first element of the array a
        p++;            // Move the pointer to the next element (a[1])

        // Print the name and age of the second element (a[1])
        printf("%s\n", p->name); // Output: lee
        printf("%d\n", p->age);  // Output: 38

        return 0;
    }
}
