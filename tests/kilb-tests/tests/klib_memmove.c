#include "klibtest.h"

void test_memmove() {
  int l, r;
  for (l = 0; l < N; l ++) {
    for (r = l + 1; r <= N; r ++) {
      reset();
      int n = r - l > N-r ? N-r : r - l;
      memmove(data + l, data + r, n);
      check_seq(0, l, 1);
      check_seq(l, l+n, r + 1); 
      check_seq(l+n, N, l + n + 1);
    }
  }
}

int main() {
  test_memmove();
  return 0;
}