#include <stdio.h>
#include "fib.h"

int first_num;
int second_num;


int main() {
  while (1) {
    printf("enter the first two numbers: ");
    scanf("%d,%d", &first_num, &second_num);
    if (first_num == 0 && second_num == 0) {
      break;
    }
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
  }
  return 0;
}
