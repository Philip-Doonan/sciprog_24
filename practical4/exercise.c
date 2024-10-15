
#include <stdio.h>
#include <math.h>
/*
initalise global variables,function as asked in question
*/
float degtorad(float n);
float trapArea();
float tanResults[13];

int main(void){

	int i,count;
	float rad,area;
/*
	loop over 0 to 60 converting intervales of 5 to radians using function degToRad 
	and saving in array while printing
*/
	for(i=0;i<12;i++){
		rad=degtorad(i*5);
		tanResults[i] = tan(rad); 
		printf("tan result %d is %f \n",i,tanResults[i]);
	}
/*
	run the trap method to get area 
*/
	area = trapArea();
	printf("Result of trapazoidal rule is: %f \n",area);
	printf("Real Result %f\n",log(2));
return 0;
}

/*
Function as shown in notes converting deg to radians (x*pi/180)
*/

float degtorad(float n){
	float result;
	result = ((M_PI * n)/180);
return result;
}

/*
Trap function as used in practical 3 with slight adjustments for new varibles
*/

float trapArea(){
	int i;
	float result;
	
	result = tanResults[0]+tanResults[12];
	
	for(i=1;i<12;i++){
		result = result + 2*tanResults[i];
	}
	printf("Value of sum after loop: %f\n",result);
	result = result*degtorad((60.0-0.0)/(2*12));
return result;
}
