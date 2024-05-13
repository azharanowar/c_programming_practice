/*Example 2: Program that calculates and displays the 200th triangular number.*/
#include <stdio.h>

int main() {
  int num_rows = 200; // Number of rows in the triangle
  int triangular_number = 0;

  // for loop to calculate the triangular number
  // for (int i = 1; i <= num_rows; i++) {
  //   triangular_number += i; // Add current row number to the sum
  // } 

  int i = 1;
  while (i <= num_rows) {
    triangular_number += i; // Add current row number to the sum

    i++;
  }

  printf("The 200th triangular number is: %d\n", triangular_number);

  return 0;
}
