/* variable_intro.c teaches about variables

   Brendan Doyle 11/01/2023

*/

#include <stdio.h>

int main() {
  //Task 1: Create(declare 2 in variables x, y)
  int x;
  int y;
  //Task 2: Set x to contain the value 6 and y to contain the value 10
  x = 6;
  y = 10;
  //Task 3: Print the values of x and y seperately
  printf("X is %d.\n", x);
  printf("Y is %d.\n", y);

  //Task 4: Print the sum of x and y
  printf("X + Y = %d\n", x + y);
  
  //Task 5: Print out the values of x and y in the same printf statemesnt
  printf("X is %d. Y is %d\n", x, y);

  return 0;

}
