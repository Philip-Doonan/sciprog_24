/*
load packages math.h for pi and trignometric funtion values
stdio.h for basic functions
*/
#include <stdio.h>
#include <math.h>

int main(void){
/*
	initialise each variable needed with corresponding type 
	Assign variable values according to practial pdf parts 1 & 2
*/
	float a,b,result,jump,actual,difference;
	int i;

	a = 0;
	b = M_PI/3;
	jump = b/11;
	actual = log(2);
	result = tan(a)+tan(b);
/*
	Loop over the eleven steps incrementing x accordingly while updating result parts 3 & 4
*/
	for(i=0;i<11;i++){
		result = result + 2*tan(jump*i);
	}
/*
	Finish Trapezodialrule formula off as stated in pdf part 5
	print results and difference to log(2) part 6
*/
	result = result*b/(2*11);
	difference = result-actual;
	printf("result of trapazodl method = %f \n",result);
	printf("log(2) = %f \n",actual);
	printf("difference = %f \n",difference);
	
return 0;
}
