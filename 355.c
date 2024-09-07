#include <stdio.h> // Include the standard input-output library

main() {
  int num[10];
  int min = 9999;
  int i;
  for (i = 0; i < 10; i++) {
    scanf("%d", &num[i]);
    if (num[i] < min) {
      min = num[i];
    }
    for (i = 0; i < 10; i++) {
      if (min > num[i]) {
        min = num[i];
      }

    printf("%d\n", min);
  }
}
printf"The minimum number is %d\n", min);
return 0;
}
//output
// 1

//43
