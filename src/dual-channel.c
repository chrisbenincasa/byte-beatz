#include <stdio.h>
#include <math.h>

// play at 8000 Hz with 2 channels
int main(t) {
  for(;;t++) {
    putchar((t * 9 & t >> 4 | t * 3 & t >> 7 | t * 3 & t / 1024) - 2); // left
    putchar((t * 9 & t >> 4 | t * 3 & t >> 7 | t * 4 & t / 1024) - 1); // right
  }

  return 0;
}