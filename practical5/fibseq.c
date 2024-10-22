#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*
import <stdlib.h> to exit if scan isnt in correcr form
*/

void fib(int *a,int *b);

int main(void){
	int i,n,result;
/*
	scan in variable n as asked and check its greater than 1
*/
	printf("Please enter an integer n \n");
	scanf("%d",&n);
	if(n<1){
		printf("Please enter a number greater than 1 \n");
		exit(1);
	}

	int f0=0;
	int f1=1;
/*
	printing fib sequence first two variables 0 and 1 
*/
	printf("The series to %d is \n",n);
	printf("%d,\n%d\n",f0,f1);

/*
	loop while calling pointer function 
*/

	for(int i = 2; i<=n;i++){
		fib(&f1,&f0);
		printf("%d \n",f1);
	}

return(0);
}

void fib(int *a,int *b){
/*
	using pointers to add up as fib seq requires
*/
	int next;
	next = *a + *b;

	*b = *a;
	*a = next;
}
