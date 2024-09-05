#include <stdio.h>

struct A {
  int a;
  int b;
};

int main() { // Add return type to main
  struct A st[2];
  struct A *p;
  int i;
  for (i = 0; i < 2; i++) {
      st[i].a = i;
      st[i].b = i + 1;
  }
  p = st; // Initialize pointer p to point to the array st
  printf("%d\n", p[0].a + p[1].b); // Use pointer p to access and print values
  return 0; // Add return statement
}

