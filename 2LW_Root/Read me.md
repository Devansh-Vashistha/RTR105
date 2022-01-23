# Laboratory work Nr. 2
# Bisection Method


## Content
- [x] 1. [Expression with plotting](https://github.com/Devansh-Vashistha/RTR105/blob/main/The%20Lab%201/LAB%201%20Report.md#expression-with-plotting)
- [x] 2. [Code](https://github.com/Devansh-Vashistha/RTR105/blob/main/The%20Lab%201/LAB%201%20Report.md#code)
- [x] 3. [Example](https://github.com/Devansh-Vashistha/RTR105/blob/main/The%20Lab%201/LAB%201%20Report.md#example)
- [x] 4. [Description](https://github.com/Devansh-Vashistha/RTR105/blob/main/The%20Lab%201/LAB%201%20Report.md#description)


## Expression with plotting
![CodeCogsEqn](https://user-images.githubusercontent.com/89969531/150698880-20e184d7-8256-4418-b075-afd1d7632f1b.svg), where A is root or point to found

![Plot](https://user-images.githubusercontent.com/89969531/150698813-41c07e98-80ae-41e0-9d50-cec64051a0b4.png)
Fig 1

## Code
####  #include <stdio.h>
#### #include <math.h>
#### double f(double x, double d){
#### return (cosh(sqrt(x))) - d;}
#### int main(void) {
#### double x,a,b,c;
#### printf("Kindly Enter the value, which you would like to check in function \n (try to enter value more than 1) \n");
#### scanf("%lf",&c);
#### printf("Kindly Enter the range \n \n");
#### printf("Kindly Enter starting of the range \n");
#### scanf("%lf",&a);
#### printf("Kindly Enter ending of the range \n");
#### scanf("%lf",&b);
#### x = (a+b)/2;
#### while(((b-a)>0.00001)||((a-b)>0.00001)){
#### if (((f(a,c))*(f(b,c)))>0) { // First case, if root can't be found due to it's absense or prensence of even roots!
#### printf("The value might not be present \n or \n Even number of roots are present between the entered ranges!");
#### return 0;
#### break;
#### }
#### else if (((f(a,c))*(f(b,c)))<0){ // If root odd root is present overall
#### if (((f(x,c))*(f(b,c)))<0){a = x;}  // looking right side
#### else {b = x;} // looking left side
#### }
#### //////////////////////////////////////////////////////////////////////// Miracle
#### else if(((f(a,c))*(f(b,c)))==0){
#### if ((f(a,c))==0){
#### printf("The root has been found at %lf",a);
#### return 0;
#### }
#### else if ((f(b,c))==0){
#### printf("The root has been found at %lf",b);
#### return 0;
#### }
#### }
#### //////////////////////////////////////////////////////////////////////// Miracle
#### x = (a+b)/2;
#### }
#### printf("Root is present between %f and %f",a,b);
#### return 0;
#### }
 
#### // [Original code](https://github.com/Devansh-Vashistha/RTR105/blob/main/2LW_Root/root.c)


## Example
![Lab2Example](https://user-images.githubusercontent.com/89969531/150698456-96c12235-e41f-40ac-906c-82a4da53f957.jpg)
![image](https://user-images.githubusercontent.com/89969531/150699490-023c9405-60b4-44e0-8859-4f03e99db684.png)
Fig 2

## Description
#### The above C language program code tried to provide the basic understanding of the Bisection method of finding root. A rough estimation of root of a function can be found with the help of this method. This code will divide the limits (as entered by the user), then try to find the Section or part of divided limit where the root is changing it's nature (increasing or decreasing) by multiplying the output values of the function as that point. If the differece between the limits is greater than the prescion value, then a while loop will keep on divide the limits, till the presicion value is met. In the //Miracle part will be activated if the root is present in one of the two entered limit. In Fig 1, function image has been shown when A = 0. In results, the demo of the code's output has been shown, and the result can be varified by an graphing tool called Desmos as shown in Fig 2. 
