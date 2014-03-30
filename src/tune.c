#include <stdio.h>
#include <math.h>

// play at 41000Hz
int main(t) {
  for(;;t++) {
    // [t >> speed & iter]
    // divide by pitch (lower number, higher pitch)
    // last number is pitch as well but also roundness
    char beat = ((t * ("3636489"[t >> 13 & 7] & 15)) / 12 & 128);
    char sweep = (((t >> 12) ^ (t >> 12) - 2) / 11 * t);
    char melody = ((sweep / 4 | t >> 12) & 127);
    // char sweep2 = (((t >> 11) ^ (t >> 13) - 2) / 399 * (t << 2));
    putchar(beat + melody);
  }

  return 0;
}