#include "../include/fibonacci.h"

uint64_t fibonacci(unsigned int n) {
  if (n <= 1) {
    return n;
  } else {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}
