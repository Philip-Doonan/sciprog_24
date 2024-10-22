# Practical 4 
This file contains the file exercise.c which is a trapazodial method for tan(x) similar to practical 3. 
The difference being this time we converted every 5th degree to radians using a degToRad function and used global arrays to save
the tan(x) results of the radians. This practical was to demonstrate understanding of arrays, functions and global variables.
* Compiling code using <br>
gcc -o exercise exercise.c -lm <br>

* Running code using<br>
./exercise<br>
__Output__<br>
tan result 0 is 0.000000<br>
tan result 1 is 0.087489<br>
tan result 2 is 0.176327<br>
tan result 3 is 0.267949<br>
tan result 4 is 0.363970<br>
tan result 5 is 0.466308<br>
tan result 6 is 0.577350<br>
tan result 7 is 0.700208<br>
tan result 8 is 0.839100<br>
tan result 9 is 1.000000<br>
tan result 10 is 1.191754<br>
tan result 11 is 1.428148<br>
Value of sum after loop: 14.197204<br>
Result of trapazoidal rule is: 0.619470<br>
Real Result 0.693147<br>
