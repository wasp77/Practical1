#include <stdio.h>

extern int first_num;
extern int second_num;

int fibcalc(int n) {
  int fib_num;
  if (n == 0) return first_num;
  else if (n == 1) return second_num;
  else {
    fib_num = (first_num * 2) + second_num;
    first_num = second_num;
    second_num = fib_num;
    return fib_num;
  }
}
