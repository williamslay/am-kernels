#include "klibtest.h"

uint8_t src[N];

void src_set() {
  int i;
  for (i = 0; i < N; i ++) {
    src[i] = 256 - i - 1;
  }
}

void test_memcpy() {
  src_set();
  int l, r;
  for (l = 0; l < N; l ++) {
    for (r = l + 1; r <= N; r ++) {
      reset();
      memcpy(data + l, src + l, r - l);
      check_seq(0, l, 1);
      check_mem_eq(data + l, src + l, r - l);
      check_seq(r, N, r + 1);
    }
  }
}

int main() {
  test_memcpy();
  return 0;
}