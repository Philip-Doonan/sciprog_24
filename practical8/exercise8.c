/*
Iterative and recursice versions of Euclids Algorithim 
to calculate the gcd of two positive numbers
*/

#include <math.h>
#include <stdio.h>

int iterativeGCD(int a, int b){
	int temp;
	while(b!=0){
		temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}

int recurciveGCD(int a, int b){
	if(b==0){
		return a;
	}
	else{
		return(recurciveGCD(b, a%b));
	}
}

int main(void){
	int a,b,error;

	printf("Please enter two positive integers:\n");
	error=scanf("%d %d",&a,&b);

	if(error!=2){
		printf("Please enter two integers!\n");
		return 1;
	}

	if(a<=0||b<=0){
		printf("Please enter positive integers\n");
		return 1;
	}
	
	printf("interativeGCD(%d, %d)=%d\n",a,b,iterativeGCD(a,b));
	printf("recursiveGCD(%d, %d)=%d\n",a,b,recurciveGCD(a,b));
return 0;
}
