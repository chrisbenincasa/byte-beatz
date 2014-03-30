#include <stdio.h>
#include <math.h>

// play at 16000Hz or 32000Hz
int main(t) {
  for(;;t++) {
    char s[5] = "68689";
    int x = (t << (t >> 16 & 3)) & t * s[t >> 16 & 3] / (24 & 127);
    int y = t & (t - 1);
    char o2 = (t << 16) + (y & ((t >> 8 ^ (t >> 10 | t >> 15) | x) & 63));
    putchar(o2);
  }

  return 0;
}