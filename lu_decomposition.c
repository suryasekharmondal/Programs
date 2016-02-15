/*Program to find LU Decomposition*/

#include<stdio.h>
#include<stdlib.h>
int main(void){
	float **l,**u,**a,sum,*z,*x,*b;
	int i,j,k,n;
	printf("\nenter the length of the matrix");
	fflush(stdin);
	scanf("%d",&n);
	a=(float**)malloc(n*sizeof(float*));
	
	//Memory allocation
	
	for(i=1;i<=n;i++){
		a[i]=(float*)malloc(n*sizeof(float));
	}
	
	l=(float**)malloc(n*sizeof(float*));
	
	for(i=1;i<=n;i++){
		l[i]=(float*)malloc(n*sizeof(float));
	}
	
	u=(float**)malloc(n*sizeof(float*));
	
	for(i=1;i<=n;i++){
		u[i]=(float*)malloc(n*sizeof(float));
	}
	
	z=(float*)malloc(n*sizeof(float));
	b=(float*)malloc(n*sizeof(float));
	x=(float*)malloc(n*sizeof(float));
	
	printf("\nenter the coefficient matrix\n");
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%f",&a[i][j]);
		}
	}
	
	printf("\nenter the right-hand-side matrix\n");
	
	for(i=1;i<=n;i++){
		scanf("%f",&b[i]);
	}
	
	for(i=1;i<=n;i++){
		u[i][i]=1;
	}
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			sum=0;
			if(i>=j){
				for(k=1;k<=(j-1);k++){
					sum+=l[i][k]*u[k][j];
				}
				l[i][j]=a[i][j]-sum;
				if(i>j)
				u[i][j]=0;
			}
			else{
				for(k=1;k<=(i-1);k++){
					sum+=l[i][k]*u[k][j];
				}
				u[i][j]=(a[i][j]-sum)/l[i][i];
				l[i][j]=0;
			}
		}
	}
	
	printf("\nyour upper triangular matrix is:\n");
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("%f\t",u[i][j]);
		}
		printf("\n");
	}
	
	printf("\nyour lower triangular matrix is:\n");
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("%f\t",l[i][j]);
		}
		printf("\n");
	}
	
	z[1]=b[1]/l[1][1];
	for(i=2;i<=n;i++){
		sum=0;
		for(j=1;j<i;j++){
			sum+=l[i][j]*z[j];
		}
		z[i]=(b[i]-sum)/l[i][i];
	}
	
	printf("\nyour intermediary-matrix is:\n");
	
	for(i=1;i<=n;i++){
		printf("%f\n",z[i]);
	}
	x[n]=z[n];
	for(i=(n-1);i>=1;i--){
		sum=0;
		for(j=i+1;j<=n;j++){
			sum+=u[i][j]*x[j];
		}
		x[i]=(z[i]-sum)/u[i][i];
	}
	
	printf("\nyour solution matrix is:\n");//printing the solution matrix
	
	for(i=1;i<=n;i++){
		printf("%f\n",x[i]);
	}
	return 0;
}
