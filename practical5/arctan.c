#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/*
initalise both functions as asked 
*/
double arctanh1(double x,double delta);
double arctanh2(double x);

int main(void){
	double delta;
	double x = -0.9;
	int length=1000;
	double tan1[length];
	double tan2[length];
	int i;
/*
	scan in delta variable
*/
	printf("Please enter a positive real number:\n");
	scanf("%lf",&delta);
	if(delta<0){
		printf("Delta was negitive");
		exit(1);
	}
/*
	loop from -0.9 to 0.9 in increments of 0.01
*/
	while(x<=0.9 && i<length){
		tan1[i]=arctanh1(x,delta);
		tan2[i]=arctanh2(x);
		printf("the difference at x=%lf is %.10lf \n",x,fabs(tan1[i]-tan2[i]));
		i++;
		x+=0.01;
	}
 
return 0;
}
/*
	Maclaurin series function as shown in pdf
*/

double arctanh1(double x,double delta){
	double sum =0;
	double elem,val;
	int n=0;
	
	do{
		val=2*n+1;
		elem=pow(x, val)/val;
		sum+=elem;
		n++;
	}while(fabs(elem)>=delta);
	return(sum);
}
/*
	hyperbolic arc tangent in log form 
*/
double arctanh2(double x){
	return (log(1+x)-log(1-x))/2;
}
