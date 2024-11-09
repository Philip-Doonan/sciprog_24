# Practical 6 
In this practical we used how to use make files and why they can help when 
compiling large projects. This practial6 folder contains a file exercise6 which was parts one through 5 of the practical and computes C=A*B 

## Compiling <br>

* When compiling base code<br>
gcc -o exercise6 exercise6.c -lm <br>

* When compiling using the make file <br>
make<br>

## Running <br>
* Base Code<br>
./exercise6<br>
* Using Make<br>
./exercise6C<br> 

* __Output__
either way is the same<br>

Matrix A:<br>
  0   1   2<br>
  1   2   3<br>
  2   3   4<br>
  3   4   5<br>
  4   5   6<br>
<br>
Matrix B:<br>
  0 -1 -2 -3<br>
  1  0 -1 -2<br>
  2  1  0 -1<br>
<br>
Matrix C:<br>
  5   2  -1  -4<br>
  8   2  -4 -10<br>
 11   2  -7 -16<br>
 14   2 -10 -22<br>
 17   2 -13 -28<br>

