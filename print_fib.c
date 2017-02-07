#include <stdio.h>
#include "fib.h"


int main() {
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
  return 0;
}
