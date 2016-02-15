
/*Program to print the sin, cos and tan series using library functions and series expansions from 0 to 360 degrees in steps of 10*/
#include <stdio.h>
#include <math.h>
float fact(float num);
int main(){
       float sin_series, sin_func, cos_series, cos_func, tan_series, tan_func, temp;
       float loop3, loop1, loop2;
      printf("Trigonometric Series Using Library Function\n");
      sin_series=0.0;
     printf("Trigonometric Series Using Series Expansions\n");
     for(loop1=0.0; loop1<=360; loop1+=10){
                sin_func=sin(loop1*3.142/180);
                printf("Sin %.1f= %2.5f\t", loop1, sin_func);
                cos_func=cos(loop1*3.142/180);
                printf("Cos %.1f= %2.5f\t", loop1, cos_func);
                tan_func=tan(loop1*3.142/180);
                printf("Tan %.1f= %2.5f\t", loop1, tan_func);
                 sin_series=0.0; cos_series=0.0; tan_series=0.0;
                for(loop3=1.0; loop3<=10; loop3++){
                       temp= pow((loop1*3.142/180),(2*loop3-1.0))/fact(2*loop3-1.0);
                       sin_series+=pow((-1.0), (loop3+1.0))*temp;
               }
              printf("Sin %.1f= %2.5f\t", loop1, sin_series);
               for(loop2=1.0; loop2<=10; loop2++){
                       temp= pow((loop1*3.142/180),(2*loop2-1.0))/fact(2*loop2-1.0);
                       cos_series+=pow((-1.0), (loop2+1.0))*temp;
               }

              printf("Cos %.1f= %2.5f\t", loop1, cos_series);
             tan_series= sin_series/cos_series;
             printf("Tan %.1f= %2.5f\t", loop1, tan_series);
  }
   getch();
   return 0;
}
float fact(float num){
         float ctr= 1.0;
         while(num>0){
                 ctr= ctr*num;
                 num--;
         }
return ctr;
}

