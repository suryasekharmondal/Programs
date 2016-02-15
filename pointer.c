#include <stdio.h>
int main(){
	int x, *p, *q, *r, y;
	x=10;
	printf("%lld\n", x);
	p=&x; //p contains address of x as its value
	printf("%lld\n", p);//printd address of x
	printf("%lld\n",&p);//prints address of the pointer variable p
	*p=20;//p accesses the value of x
	printf("%lld\n", *p);
	printf("%lld\n", &x);//prints address of x which is also the value of p
	printf("%lld\n", &p);//prints address of pointer variable p
	printf("%lld\n",x);// prints value in x which is now 20
	q=&p;//q contains address of p as its value
	printf("%lld\n", *q);// prints the value of p
	printf("%lld\n", q);//prints the value of q which is the address of p
	printf("%lld\n", &q);//prints address of q
	r=&q;//r stores the address of q as its value
	printf("%lld\n", r);
	printf("%lld\n", *r);
	printf("%lld\n", &r);
	
	return 0;
}
