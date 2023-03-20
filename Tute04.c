/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the
main() function.

Do not change the code given in the main() function when you are implementing
your solution.*/

#include <stdio.h>
int minimum(int x, int y);  // function1 declaration
int maximum(int a, int b);  // function2 declaration
int multiply(int c, int d); // function3 declaration

int minimum(int x, int y) { // function1 implementation
  if (x < y) {
    return x;
  } else {
    return y;
  }
}

int maximum(int a, int b) { // function2 implementation
  if (a < b) {
    return b;
  } else {
    return a;
  }
}

int multiply(int c, int d) { // function3 implementation
  return c * d;
}

int main() {
  int no1, no2;
  printf("Enter a value for no 1 : ");
  scanf("%d", &no1);
  printf("Enter a value for no 2 : ");
  scanf("%d", &no2);
  printf("%d ", minimum(no1, no2));  // function1 calling
  printf("%d ", maximum(no1, no2));  // function2 calling
  printf("%d ", multiply(no1, no2)); // function3 calling
  return 0;
}
