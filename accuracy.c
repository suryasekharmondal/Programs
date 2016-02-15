#include <stdio.h>
int main() {
  float sum; int i,j;
  for (i = 1; i <= 1000; i = i + 1)  {
    sum = 0.0;
    for ( j = 1; j <= i; j = j +1) {
      sum = sum + (float)1 / i;
    }
    printf("Sum of  1/%d  %d times = %f \n", i, i, sum);
  }
  return 0;
}
