
/*This program is an implementaion of the Jacobi iteration method for
3 -0.1 -0.2 | 7.85
0.1 7 -0.3  | -19.3
0.3 -0.2 10 | 71.4
The relation used is
X(k+1)=(Diagonal matrix Inverse)(b-(Lower triangular matrix + Upper triangular matrix)*X(k))
where k is the k-th approximation
*/

#include<stdio.h>
float coeff[10][10];
float Diagonalinv[10][10];
float approx[10][1];
float R[10][10]; //declare the relevant matrices
float matrixRes[10][1];
float b[10][1];
float temp[10][1];
int row,column,size,k;

//function to multiply matrices
void multiply(float matrixA[][10],float matrixB[][1])
{
    int i,j;

for(i=0;i<size;i++)
{
    matrixRes[i][0]=0;
        for(k=0;k<size;k++)
            matrixRes[i][0]=matrixRes[i][0]+matrixA[i][k]*matrixB[k][0];
}
}
int main()
{
printf("Enter the number of unknown\n");
scanf("%d",&size); //enter the size
printf("Enter the coefficent matrix\n");
for(row=0;row<size;row++)
    for(column=0;column<size;column++)
        scanf("%f",&coeff[row][column]);
printf("Enter the first approximation\n");
for(row=0;row<size;row++)
scanf("%f",&approx[row][0]);
printf("Enter the RHS coefficient\n");
for(row=0;row<size;row++)
scanf("%f",&b[row][0]);
for(row=0;row<size;row++)//We calculate the diagonal inverse matrix make all other entries as zero except Diagonal entries whose reciprocal we store
    for(column=0;column<size;column++)
    {    if(row==column)
        Diagonalinv[row][column]=1/coeff[row][column];
        else
        Diagonalinv[row][column]=0;
    }
for(row=0;row<size;row++)
    for(column=0;column<size;column++) //calculating the R matrix L+U
    {    if(row==column)
        R[row][column]=0;
        else
        if(row!=column)
        R[row][column]=coeff[row][column];
    }
int iter=8;
/*printf("Enter the number of iterations:\n");
scanf("%d",&iter);//enter the number of iterations*/
int i=1;
int j;
while(i<=iter)
{
multiply(R,approx); //multiply L+U and the approximation
for(row=0;row<size;row++)
temp[row][0]=b[row][0]-matrixRes[row][0]; //the matrix(b-Rx)
multiply(Diagonalinv,temp);//multiply D inverse and (b-Rx)
for(j=0;j<size;j++)
approx[j][0]=matrixRes[j][0];//store matrixRes value in the next approximation
printf("The Value after iteration %d is\n",ctr);
for(row=0;row<size;row++)
printf("%.3f\n",approx[row][0]);//display the value
ctr++;
}
}
