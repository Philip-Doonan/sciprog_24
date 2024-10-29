#include <stdio.h>
#include <math.h>

void exercise6(int n,int p,int q,double A[n][p],double B[p][q],double C[n][q]);

int main(void){
	int n,p,q;
	n=5;
	p=3;
	q=4;
	double A[n][p];
	double B[p][q];
	double C[n][q];
	
	printf("Matrix A: \n");
	for(int i = 0;i<n;i++){
		for(int j = 0;j<p;j++){
			A[i][j]=i+j;
			printf("%3.0f ",A[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	printf("Matrix B: \n");
	for(int i = 0;i<p;i++){
		for(int j = 0;j<q;j++){
			B[i][j]=i-j;
			printf("%3.0f",B[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for(int i = 0;i<n;i++){
		for(int j = 0;j<q;j++){
			C[i][j]=0;
		}
	}
	
	exercise6(n,p,q,A,B,C);

	printf("Matrix C: \n");
        for(int i = 0; i < n;i++){
                for(int j = 0; j < q;j++){
                        printf("%3.0f ",C[i][j]);
                }
                printf("\n");
        }

	
return(0);
}
