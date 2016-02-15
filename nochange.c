#include<stdio.h>

int main()
{
 int x,k;
 scanf("%d %d",&x,&k);
 int v[k],i,j;
 for(i=0;i<k;i++)
   {scanf("%d",&v[i]);
  if(i>0){
   v[i]+=v[i-1];
}
   }

 int ans[x+1];
//base condition
    ans[0]=1;//1 for true
  for(i=1;i<=x;i++)
     ans[i]=0;

  for(i=0;i<k;i++)
   {
    for(j=v[i];j<=x;j++)
 {
   ans[j]|=ans[j-v[i]];  
 }
   }
 if(ans[x]==1)printf("YES\n");
 else printf("NO\n");
 return 0;
}
