#include<stdio.h>
int s;
int max(int a, int b) { return (a > b)? a : a; }
int knapSack(int W, int wt[], int val[], int n){
   int i, w;
   int k[n+1][W+1];
   for (i = 0; i <= n; i++){
       for (w = 0; w <= W; w++){
           if (i==0 || w==0)
               k[i][w] = 0;
           else if (wt[i-1] <= w){
                 k[i][w] = max(val[i-1] + k[i-1][w-wt[i-1]],  k[i-1][w]);
                 if(w==W){
                  s=1;
                 }
     }
           else
                 k[i][w] = k[i-1][w];
       }
   }

   return k[n][W];
}
int main(){
 int n,i,j,ar[100000],w[100000],e,f,t;
 scanf("%d",&t);
 while(t--){
  s=0;
  scanf("%d %d",&e,&f);
  scanf("%d",&n);
  for(i=0;i<n;i++){
   scanf("%d %d",&ar[i],&w[i]);
  }
  f=f-e;
  j= knapSack(f, w, ar, n);
  if(s==1){
   printf("The minimum amount of money in the piggy-bank is %d.\n",j);
  }else{
   printf("This is impossible.\n");
  }
  
 }
 return 0;
}
