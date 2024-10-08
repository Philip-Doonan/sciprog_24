# Practical 2
This folder contains the c files Converion and Sum which demonstrate how float values arent 100%
accurate was also the starting practical getting used to getting files onto the virtual machine

## Part 1 Conversion
* Compiled using <br>
gcc -o conversion Conversion.c -lm

* Ran using <br>
./conversion <br>
__Note__:-lm is used as we needed to import some mathmatical functions using math.h

* __Output__
The number of digits is 3<br>
inum=6,  fnum=6.000000, inum in binary=110

## Part2 Sum
* Compile using <br>
gcc -o sum Sum.c -lm

* Ran using<br>
./sum

* __Output__
Sum1=7.485478<br>
Sum2=7.485472<br>
Difference between the two is 0.000007
