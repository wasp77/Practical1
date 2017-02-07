#include "fib.h"

int fibcalc(int n) {
  if (n == 0) return 0;
  else if (n == 1) return 1;
  else return (fibcalc(n - 2) * 2) + fibcalc(n - 1);
}
