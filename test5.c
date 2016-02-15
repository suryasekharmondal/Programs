#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
	int i,j;
  int *a; // In the array a
  int n; // of size n, putting frequencies
  int f; // of f random numbers in 0 to n - 1
  int nx; float x; int max, min;
  int random; // Change on every run
  scanf("%d", &n); 
  a = malloc(n * sizeof(int));
  scanf("%d", &f); 
  scanf("%d", &random); srand(random);
  for ( i = 0; i < f; i = 1 + i) {
      x = rand(); //Convert rand to float first
      x = n * x / RAND_MAX;  nx = x;
      a[i] = 1 + a[nx];
      printf("%d\n", a[i]);
   }
   
   max = min = a[0];
   for ( i  = 1; i <= n - 1; i = 1 + i)  { 
     if (min > a[i]) min = a[i];
     else if (max < a[i]) max = a[i];
   }
   printf("    HISTOGRAM");
   for ( i  = 0; i <= n - 1; i = 1 + i)  { 
      nx = 25 * a[i] / (max - min);
      printf("\n%5d ", i);
      for ( j = 1; j <= nx; j = 1 + j) {
        printf("*");
      }
    }
  return 0;
}
