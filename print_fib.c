#include <stdio.h>
#include "fib.h"


int main() {
  int num;
  printf("length? ");
  scanf("%d", &num);
  printf("[");
  if (num == 0) {
    printf("%d", fibcalc(num));
  } else if (num == 1) {
    printf("%d, ", fibcalc(num - 1));
    printf("%d", fibcalc(num));
  } else {
    for (int i = 0; i < num; i++) {
      if (i < (num - 1)) {
        printf("%d, ", fibcalc(i));
      } else {
        printf("%d", fibcalc(i));
      }
    }
  }
  printf("]\n");
  return 0;
}
