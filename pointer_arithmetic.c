#include <stdio.h>
int main(){
	int a, b, *p1, *p2, x, y, z;
	a=12;
	b=4;
	p1= &a;
	p2= &b;
	x= *p1 * *p2-6;
	y= 4* - *p2/ *p1 +10;
	printf("Address of a= %llu\n", p1);
	printf("Address of b= %llu\n", p2);
	printf("\n");
	printf("a= %d, b= %d\n", a, b);
	printf("x= %d, y= %d\n", x, y);
	*p2= *p2+3;
	*p1= *p1-6;
	z= *p1 * *p2-6;
	printf("\na= %d, b= %d, ", a, b);
	printf("z= %d\n", z);
	printf("\nResult of p2-p1= %lld\n", p2-p1);
	p2=p1+2;
	printf("Result of p2= %lld\n", p2);
	return 0;
	
}
