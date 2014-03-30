#include <stdio.h>
main(t) {
  for (;;t++) {
    putchar(t >> (t % 8));
  }
}