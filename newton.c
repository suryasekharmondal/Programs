#include <stdio.h>
int main(void) {
  
     float x, n_x, fn, dfn;
     
     printf("Let us solve x**4 = 81" "\n\n");
     n_x = 81; 
     printf("%f\n", n_x); 
     do {
          x = n_x;
          fn = x * x * x * x - 81; 
          dfn = 4 * x * x *x; 
          n_x = x - fn / dfn;
          printf("%f\n", n_x); 
     }  while ((x - n_x) >= 0.0001 || (x - n_x) <= -0.0001);
     
     printf("\nx = %f", n_x);

  return 0;
}