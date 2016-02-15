#include <stdio.h>
#include <math.h>
#define PI 3.1415926

int main(void) {
  
  int angle, n;
  float x, term, sum;
  
  for (angle = 0;  angle <= 360; angle = angle + 10) {
    x = angle * PI / 180;
    sum = 0;
    n = 1; term = x; sum = sum + term;
    while (term >= 0.0001 || term <= -0.0001) {
        n = n + 1;
        term = - x * x * term / ((2 * n - 2) * (2 * n - 1));
        sum = sum + term;
     }
     printf("mySine(" "%3d" ") = " "%9.6f" "---------", angle, sum);
     printf("theirSine(" "%3d" ") = " "%9.6f", angle, sin(x));
     printf("\n");
   }
    

  return 0;
}