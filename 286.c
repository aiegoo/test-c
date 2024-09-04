#include <stdio.h>

// Define a structure named jsu
struct jsu {
  char nae[12]; // Character array to store name
  int os;       // Integer to store OS score
  int db;       // Integer to store DB score
  int hab;      // Integer to store sum of scores
  int hhab;     // Integer to store total sum including hab
};

int main() {
  // Initialize an array of 3 jsu structures with initial values
  struct jsu st[3] = {{"데이터1", 95, 88, 0, 0}, {"데이터2", 84, 91, 0, 0}, {"데이터3", 86, 75, 0, 0}};
  // st[0] = {"데이터1", 95, 88, 0, 0}
  // st[1] = {"데이터2", 84, 91, 0, 0}
  // st[2] = {"데이터3", 86, 75, 0, 0}

  struct jsu* p; // Declare a pointer to jsu structure
  p = &st[0];    // Point to the first element of the array st
  // p points to st[0]

  // Calculate hab for the second element (st[1])
  (p + 1)->hab = (p + 1)->os + (p + 2)->db;
  // (p + 1)->hab = st[1].os + st[2].db = 84 + 75 = 159
  // st[1] = {"데이터2", 84, 91, 159, 0}

  // Calculate hhab for the second element (st[1])
  (p + 1)->hhab = (p + 1)->hab + p->os + p->db;
  // (p + 1)->hhab = st[1].hab + st[0].os + st[0].db = 159 + 95 + 88 = 342
  // st[1] = {"데이터2", 84, 91, 159, 342}

  // Print the sum of hab and hhab for the second element (st[1])
  printf("%d", (p + 1)->hab + (p + 1)->hhab);
  // Output: 159 + 342 = 501

  return 0;
}
