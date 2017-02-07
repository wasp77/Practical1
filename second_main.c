#include <stdio.h>
#include "fib.h"

int first_num;
int second_num;


int main() {
  while (1) {
    printf("Starting values? ");
    if (scanf("%d,%d", &first_num, &second_num) != 2) {
      printf("Invalid input\n");
      return 0;
    }
    if (first_num == 0 && second_num == 0) {
      break;
    }
    int num;
    printf("Length? ");
    scanf("%d", &num);
    printf("[");
    for (int i = 0; i < num; i++) {
      if (i < (num - 1)) {
        printf("%d, ", fibcalc(i));
      } else {
        printf("%d", fibcalc(i));
      }
    }
    printf("]\n");
  }
  return 0;
}
