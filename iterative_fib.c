#include "fib.h"

int fibcalc(int n) {
  int fib_num;
  int first = 0;
  int second = 1;
  if (n == 0) return 0;
  else if (n == 1) return 1;
  else {
    for (int i = 1; i < n; i++) {
      printf("<%d>", first);
      fib_num = (first * 2) + second;
      first = second;
      second = fib_num;
    }
    return fib_num;
  }
}
