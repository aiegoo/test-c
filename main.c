#include <stdio.h>

int main() {
  int scores[] = {86, 53, 95, 76, 61};
  int numScores = sizeof(scores) / sizeof(scores[0]);

  for (int i = 0; i < numScores; i++) {
    int score = scores[i];
    char rank[10];

    switch (score) {
      case 90 ... 100:
        strcpy(rank, "A");
        break;
      case 80 ... 89:
        strcpy(rank, "B");
        break;
      case 70 ... 79:
        strcpy(rank, "C");
        break;
      case 60 ... 69:
        strcpy(rank, "D");
        break;
      default:
        strcpy(rank, "F");
        break;
    }

    printf("Score: %d, Rank: %s\n", score, rank);
  }

  return 0;
}

#include <stdio.h>
#include <string.h>

void main() {
  int scores[] = {86, 53, 95, 76, 61};
  int numScores = sizeof(scores) / sizeof(scores[0]);

  for (int i = 0; i < numScores; i++) {
    int score = scores[i];
    char grade[10];

    switch (score) {
      case 90 ... 100:
        strcpy(grade, "A");
        break;
      case 80 ... 89:
        strcpy(grade, "B");
        break;
      case 70 ... 79:
        strcpy(grade, "C");
        break;
      case 60 ... 69:
        strcpy(grade, "D");
        break;
      default:
        strcpy(grade, "F");
        break;
    }

    if (strcmp(grade, "F") != 0) {
      printf("Index: %d, Score: %d, Score/10: %d, Grade: %s\n", i, score, score / 10, grade);
    }
  }
}
