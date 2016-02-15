#include <stdio.h>
#include <stdlib.h>
#define MAX_TERMS 101

typedef struct{
	float coef;
	int exp;
}polynomial;

polynomial terms[MAX_TERMS];
int avail=0;

int Compare(int a, int b){
	
	if(a>b)   return 1;
	else if(a==b)   return 0;
	else   return -1;
	
}

void attach(float coefficient, int exponent){
	
	if(avail> MAX_TERMS){
		fprintf(stderr, "Too many terms in the polynomial");
		exit(EXIT_FAILURE);
		}
		
		terms[avail].coef= coefficient;
		printf("%f\n", terms[avail].coef);
		terms[avail++].exp= exponent;
		printf("%d\n", terms[avail].exp);
}

void padd(int startA, int finishA, int startB, int finishB){
	
	float coefficient;
	int *startD;
	*startD= avail;
	
	int i;
	
	while(startA<= finishA && startB<=finishB){
		
		switch(Compare(terms[startA].exp, terms[startB].exp)){
			
			case 1: attach(terms[startA].coef, terms[startA].exp);
			        startA++;
			        break;
			case -1: attach(terms[startB].coef, terms[startB].exp);
			         startB++;
			         break;
			case 0: coefficient= terms[startA].coef+ terms[startB].coef;
			        startA++;
			        startB++;
			        if(coefficient!=0)
			           attach(coefficient, terms[startA].exp);
		}
		
		for(i=startA; i<= finishA; i++)
		   attach(terms[startA].coef, terms[startB].exp);
		   
		for(i=startB; i<=finishB; i++)
		   attach(terms[startB].coef, terms[startB].exp);
		   
	int *finishD;
	*finishD= avail-1;
	
	printf("*finishD= %d", *finishD);

    printf("The added polynomial is\n"
	          "\t\tCoefficient \t Exponent\n");	
	for(i= *startD; i<= *finishD; i++)
	
	    printf("\t\t%f \t %d\n", terms[i].coef, terms[i].exp);
	    
	}
}
int main(){
	
	int startA, finishA, startB, finishB, numA, numB, i;
	
	printf("How many terms are there in the first polynomial?\n");
	
	scanf("%d", &numA);
	
	if(numA>MAX_TERMS){
		fprintf(stderr, "Out of range");
		exit(EXIT_FAILURE);
	}
	
	printf("Enter the first polynomial in this order\n"

    "coefficient of current term exponent of current term    \n");
    
    for(i=0; i<numA; i++)
       scanf("%f %d", &terms[i].coef, &terms[i].exp);
	
	startA=0;
	finishA=i-1;
	
	printf("How many terms are there in the second polynomial?\n");
	
	scanf("%d", &numB);
	
	if(numB>MAX_TERMS-numA){
		fprintf(stderr, "Out of range");
		exit(EXIT_FAILURE);
	}
	
	printf("Enter the first polynomial in this order\n"

    "coefficient of current term exponent of current term    \n");
    
    startB= i;
    
    for(; i<numA+numB; i++)
       scanf("%f %d", &terms[i].coef, &terms[i].exp);
    
	finishB=i-1;
	avail=i;
	
	padd(startA, finishA, startB, finishB);
	 
	return 0;  
}
