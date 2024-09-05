#include <stdio.h>

main() {
  int m = 4620;
  int a = m/1000;
  int b = m/1000/500;
  int c = m/1000/500/100;
  int d = m/100/10;
  printf("1000Won: %d\n", a);
  printf("500Won: %d\n", b);
  printf("100Won: %d\n", c);
  printf("10Won: %d\n", d);
}
