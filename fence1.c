#include <stdio.h>
#define PI 3.1415926
int main(){ 
    int length;
    float area,rad;
	while(1){
		scanf("%d", &length);
		if(length==0)
		   break;
		rad= length/PI;
		area= (PI*rad*rad)/2;
		printf("%.2f\n", area);
	}
	return 0;
}
