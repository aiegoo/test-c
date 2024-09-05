#include <stdio.h>

// 팩토리얼 함수 선언
int factorial(int n) {
  if (n == 0) {
    return 1; // 기본 사례
  } else {
    return n * factorial(n - 1); // 재귀 사례
  }
}

int main() {
  int number;
  printf("정수를 입력하세요: ");
  scanf("%d", &number);
  printf("%d의 팩토리얼은 %d입니다.\n", number, factorial(number));
  return 0;
}

// Output:정수를 입력하세요: 5
// 5의 팩토리얼은 120입니다. 5! = 5 * 4 * 3 * 2 * 1 = 120
// 계획
// 함수 선언: int factorial(int n);
// 기본 사례: n == 0일 때 1 반환
// 재귀 사례: n * factorial(n - 1) 반환
// main 함수에서 사용자 입력을 받아 factorial 함수 호출 및 결과 출력
