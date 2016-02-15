#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
int *getarray(int);
int i;
void fill(int, int, int, int*);
void arrayprint(int, int*);
void insertion_sort(int, int*);
void lin_search(int, int, int*);
void bin_search(int, int, int*);
int main(void) {
     int *a; int n; 
     int r; int random; 
     int d;
     scanf("%d", &n); a = getarray(n);
     scanf("%d", &random); // Randomizer
     scanf("%d", &r); // Elements are 0 - r
     fill(random, r, n, a);
     arrayprint(n, a);
     scanf("%d", &d); // Looking for d
     lin_search(d, n, a);
     insertion_sort(n, a);
     arrayprint(n, a);
     lin_search(d, n, a);
     bin_search(d, n, a);
     return 0;
}
int *getarray(int m) {
      int *a;
      return a = malloc(m * sizeof(int));
}
void fill(int shk, int rng, int m, int *array) {
        float x;
        srand(shk);
        for ( i = 1; i <= m - 1; i = 1 + i) {
             x = rand(); // Convert to float first
             array[i] = rng * x / RAND_MAX;       
        }
}
void arrayprint(int m, int *array) {
        for (i = 1; i <= m - 1; i = 1 + i) 
        printf("\na[%d] = %d", i, array[i]);
}
void insertion_sort(int m, int *array) {
         int t, k;
         array[0] = INT_MIN;
         for (i = 2; i <= m - 1; i = 1 + i) {
               t = array[i]; k = i - 1;
               while (t < array[k]) {
                   array[k+1] = array[k]; k = k -1;
                }
                array[k + 1] = t;
          }
}
void lin_search(int d, int m, int *array) {
      int k;
      array[0] = d;
      k = m - 1;
      while (d != array[k]) k = k - 1;
      if (k) 
        printf("\n%d is @ %dth place", d, k);
      else printf("\nDATA NOT FOUND");
}
void bin_search(int d, int s, int *array) {
      int f, l, m, found;
      f = 0; l = s - 1; found = 0;
      while (f <= l) {
            m = (f + l) / 2;
            if (d < array[m]) l = m - 1;
            else if (d > array[m]) f = m + 1;
                    else if (d == array[m]) { 
                           found = 1; break;
                    };
      }
      if (found)
       printf("\n%d is @ %dth place", d, m);
      else printf("\nDATA NOT FOUND");
}

