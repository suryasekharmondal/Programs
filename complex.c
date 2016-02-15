/*Program to implement coplex datatype without using strutures*/
#include <stdio.h>
int main(){
	float real1, imag1, real2, imag2,real_res, image_res, mod;
	int choice;
	printf("Enter the two complex numbers<real and imaginary parts>:\n");
	scanf("%f", &real1);
	scanf("%f", &imag1);
	scanf("%f", &real2);
	scanf("%f", &imag2);
	printf("The complex numbers are:\n %.2fi and %.2f+ %.2fi\n", rel1, imag1, real2, imag2);
	printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication and  4 for division\n");
scanf("%d", &choice);
if(choice==1){
	real_res= real1+real2;
	imag_res= imag1+imag2;
}
else if(choice==2){
	real_res= real1-real2;
	imag_res= imag1-imag2;
}
if(choice==3){
	real_res= real1*real2-imag1*imag2;
	imag_res= real1*imag2+real2*imag1;
}
if(choice==4){
	mod=real2*real2+imag2*imag2;
	real_res= (real1*real2+imag1*imag2)/mod;
	imag_res= (real2*imag1-real1*imag2)/mod;
}
else
printf("Wrong choice");
printf("Result is: %.2f+%.2fi", real_res, imag_res);
return 0;
}