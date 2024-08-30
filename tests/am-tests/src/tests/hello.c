#include <amtest.h>

void hello() {
  for (int i = 0; i < 10; i ++) {
    putstr("Hello, AM World @ " __ISA__ "\n");
  }
  printf("%d\n",880900 / 3);
  printf("%s         %d\n", "PASS",880900 / 3);
}
