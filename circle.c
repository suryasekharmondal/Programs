#include <stdio.h>
#include <math.h>
void drawcircle(int r)
{
	int N= 2*r+1;
	int x,y,i,j;
	for( i=0; i< N; i++){
	for( j=0; j< N; j++){
		x=i-r;
		y=j-r;
		if(x*x+y*y< r*r+1)
			printf(" ");
		else
			printf("*");
	}
	printf("\n");
}
}
void main()
{
drawcircle(9);
return 0;
}