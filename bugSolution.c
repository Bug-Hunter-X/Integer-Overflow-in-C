#include <stdio.h>
#include <limits.h>

int main() {
  int x = 10;
  int *ptr = &x;
  int input;

  printf("Enter an integer value: ");
  scanf("%d", &input);

  // Input validation to prevent integer overflow
  if (input >= INT_MIN && input <= INT_MAX) {
    *ptr = input;
    printf("Value of x: %d\n", x);
  } else {
    printf("Error: Input value out of range.\n");
  }

  return 0;
}
