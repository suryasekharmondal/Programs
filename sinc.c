#include <stdio.h>
#include <math.h>
#define PI 3.1415926

int main(void) {
  int h, half_h, w, r, c;
  int f, g;
  float cycle, x;
  //  Display dimensions decide w  & h
  w = 30;
  h = 30; half_h = h / 2;
  cycle = 4 * PI;
  
  for (r = 0; r <= h; r = r + 1) {
    x = 0;
    g = (int)(half_h - r);
    for (c = 0; c <= w - 1; c = c + 1) {
     f = (int)(half_h * sin(x)/x);
     if (f == g) printf("*"); else printf(" ");
      x = x + cycle / w;
     };
     printf("\n");
  };

  return 0;
}
