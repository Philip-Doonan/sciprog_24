
//Matrix multiplcation C=A*B

void exercise6(int n, int p,int q, double A[n][p],double B[p][q],double C[n][q]){
	int i,j,k;
	
	//Preform matrix multiplication
	for(i=0;i<n;i++){
		for(j=0;j<q;j++){
			for(k=0;k<p;k++){
				C[i][j]=C[i][j]+A[i][k]*B[k][j];
			}
		}
	}

}