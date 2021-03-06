#include<stdio.h>
#include<math.h>
#define E 2.71828183

float df1x(float x,float y){
	return(2*x+y);
}
float df2x(float x,float y){
	return(6*y);
}
float df1y(float x){
	return(x);
}
float df2y(float y,float x){
	return(1+6*y);
}
float detJ(float x,float y){
	float z;
	z=df1x(x,y)*df2y(y,x)+df2x(x,y)*df1y(x);
	return(z);
}
float getx(float x,float y){
	float x1,f1,f2;
	f1=x*x+x*y;
	f2=y+3*x*y*y;
	x1=df2y(y,x)*f1-df1y(x)*f2;
	return(x1/detJ(x,y));
}
float gety(float x,float y){
	float y1,f1,f2;
	f1=x*x+x*y;
	f2=y+3*x*y*y;
	y1=-df2x(x,y)*f1+df1x(x,y)*f2;
	return(y1/detJ(x,y));
}
int main(void){
	float tempx,tempy,oldx,oldy,newx,newy;
	newx=0.1;
	newy=0.5;
	do{
		oldx=newx;
		oldy=newy;
		newx=oldx-getx(oldx,oldy);
		newy=oldy-gety(oldx,oldy);
		printf("oldx=%f\toldy=%f\n",oldx,oldy);
		printf("newx=%f\tnewy=%f\n",newx,newy);
	}while(fabs(oldx-newx)>=0.001||fabs(oldy-newy)>=0.001);
	printf("\nyour answer is:\nx=%f\ny=%f\n",newx,newy);
	return(0);
} 
