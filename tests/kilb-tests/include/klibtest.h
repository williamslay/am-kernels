#include <klib.h>
#include <klib-macros.h>

#define N 255
uint8_t data[N];
char dest[N];

/*Test memory and string writing functions*/
void reset() {
  int i;
  for (i = 0; i < N; i ++) {
    data[i] = i + 1;
  }
}

void check_seq(int l, int r, int val) {
  int i;
  for (i = l; i < r; i ++) {
    assert(data[i] == val + i - l);
  }
}

void check_eq(int l, int r, int val) {
  int i;
  for (i = l; i < r; i ++) {
    assert(data[i] == val);
  }
}

void check_mem_eq(void *out, const void *in, size_t n) {
  char *dp = out;
  const char *sp = in;
  while(n--) {
    assert(*(uint8_t*)dp++ == *(uint8_t*)sp++); 
  }
}
