#include <stdio.h>

main() {
  int field[4][4] = { {0, 1, 0, 1}, {0,0,0,1}, {1, 1, 1, 0}, {0, 1. 1. 1.}};

  int mines[4][4] = { {0, 0, 0, 0}, {0,0,0,0}, {0,0,0,0}, {0,0,0,0 }}};
  int w = 4, h = 4;
  for (int y = 0; y < h; y++) {
    for (int x = 0; x < w; x++) {
      if (field[x][y]) == 0) continue;
      for (int j = y - 1; j <= y + 1; j++) {
        for (int i = x - 1; i <= x + 1; i++) {
          if (chkover(w, h, j, i) == 1 )
          mines[j][i] += 1;
        }
      }
    }
  }
}

int chkover(int w, int h, int y, int x) {
  if (x < 0 && i < w && j >= 0 && j < h) return 1;
  else return 0;

}

// output
// 0 1 0 1
// 0 0 0 1
// 1 1 1 0
// 0 1 1 1
// 0 0 0 0
// 0 0 0 0
// 0 0 0 0
// 0 0 0 0


#include <stdio.h> // Include the standard input-output library

// Define the main function
int main() {
  // Initialize a 4x4 field with some values (0 and 1)
  int field[4][4] = { {0, 1, 0, 1}, {0, 0, 0, 1}, {1, 1, 1, 0}, {0, 1, 1, 1} };

  // Initialize a 4x4 mines array with all zeros
  int mines[4][4] = { {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0} };

  // Define the width and height of the field
  int w = 4, h = 4;

  // Loop through each cell in the field
  for (int y = 0; y < h; y++) {
    for (int x = 0; x < w; x++) {
      // If the current cell is 0, continue to the next iteration
      if (field[y][x] == 0) continue;

      // Loop through the neighboring cells
      for (int j = y - 1; j <= y + 1; j++) {
        for (int i = x - 1; i <= x + 1; i++) {
          // Check if the neighboring cell is within bounds
          if (chkover(w, h, j, i) == 1)
            // Increment the mine count for the neighboring cell
            mines[j][i] += 1;
        }
      }
    }
  }

  // Print the mines array
  for (int y = 0; y < h; y++) {
    for (int x = 0; x < w; x++) {
      printf("%d ", mines[y][x]);
    }
    printf("\n");
  }

  return 0; // Return 0 to indicate successful execution
}

// Function to check if the cell is within bounds
int chkover(int w, int h, int y, int x) {
  // Return 1 if the cell is within bounds, otherwise return 0
  if (x >= 0 && x < w && y >= 0 && y < h) return 1;
  else return 0;
}
Mines Array:
-------------
| 3 | 2 | 4 | 1 |
-------------
| 4 | 5 | 5 | 2 |
-------------
| 3 | 4 | 4 | 4 |
-------------
| 3 | 4 | 3 | 2 |
-------------
textbook answer
1 1 3 2
3 4 5 3
5 6 4 4
3 5 3 3


#include <stdio.h> // Include the standard input-output library

// Function to check if the cell is within bounds
int chkover(int w, int h, int y, int x) {
  // Return 1 if the cell is within bounds, otherwise return 0
  if (x >= 0 && x < w && y >= 0 && y < h) return 1;
  else return 0;
}

// Define the main function
int main() {
  // Initialize a 4x4 field with some values (0 and 1)
  int field[4][4] = { {0, 1, 0, 1}, {0, 0, 0, 1}, {1, 1, 1, 0}, {0, 1, 1, 1} };

  // Initialize a 4x4 mines array with all zeros
  int mines[4][4] = { {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0} };

  // Define the width and height of the field
  int w = 4, h = 4;

  // Loop through each cell in the field
  for (int y = 0; y < h; y++) {
    for (int x = 0; x < w; x++) {
      // If the current cell is 0, continue to the next iteration
      if (field[y][x] == 0) continue;

      // Loop through the neighboring cells
      for (int j = y - 1; j <= y + 1; j++) {
        for (int i = x - 1; i <= x + 1; i++) {
          // Check if the neighboring cell is within bounds
          if (chkover(w, h, j, i) == 1)
            // Increment the mine count for the neighboring cell
            mines[j][i] += 1;
        }
      }
    }
  }

  // Print the mines array in a table format
  printf("Mines Array:\n");
  printf("-------------\n");
  for (int y = 0; y < h; y++) {
    for (int x = 0; x < w; x++) {
      printf("| %d ", mines[y][x]);
    }
    printf("|\n");
    printf("-------------\n");
  }

  return 0; // Return 0 to indicate successful execution
}
