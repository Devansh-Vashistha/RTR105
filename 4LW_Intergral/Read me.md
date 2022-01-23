# Laboratory work Nr. 4
# Integrals


## Content
- [x] 1. [Expression with plotting](https://github.com/Devansh-Vashistha/RTR105/blob/main/4LW_Intergral/Read%20me.md#expression-with-plotting)
- [x] 2. [Code](https://github.com/Devansh-Vashistha/RTR105/blob/main/4LW_Intergral/Read%20me.md#code)
- [x] 3. [Example](https://github.com/Devansh-Vashistha/RTR105/blob/main/4LW_Intergral/Read%20me.md#example)
- [x] 4. [Description](https://github.com/Devansh-Vashistha/RTR105/blob/main/4LW_Intergral/Read%20me.md#description)


## Expression with plotting
![equation](https://user-images.githubusercontent.com/89969531/150701443-360b8a67-a659-4648-a15d-b48749e31803.svg)


![equation](https://user-images.githubusercontent.com/89969531/150702398-9655014d-0041-411b-8459-d69ffefd0f19.svg)



![Plot](https://user-images.githubusercontent.com/89969531/150701368-5aa0683b-ccd8-4456-97ef-ff9bb92112cb.png)

Fig 1

## Code
#### #include <stdio.h>
#### #include <math.h>
#### int main(void) {
#### double x,a,b,dx,fx,f1x_a,f1x_f,f2x_a,f2x_f;
#### printf("Kindly Enter the range \n \n");
#### printf("Kindly Enter starting of the range \n");
#### scanf("%lf",&a);
#### printf("Kindly Enter ending of the range \n");
#### scanf("%lf",&b);
#### printf("Kindly Enter the value, for precision  \n");
#### scanf("%lf",&dx);
#### printf("x       f(x)    f'(x)   my_f'(x)  f''(x)  my_f''(x) \n");
#### x=a;
#### while(x<b){
#### fx = cosh(sqrt(x));
#### f1x_a = (sinh(sqrt(x)))/(2*sqrt(x));
#### f1x_f = ( cosh(sqrt(x+dx)) - cosh(sqrt(x)) ) / dx;
#### f2x_a =  ( cosh(sqrt(x)) - (sinh(sqrt(x)) / sqrt(x)) ) / (4*x);
#### f2x_f = ( cosh(sqrt(x+dx+dx)) - (2*cosh(sqrt(x+dx))) + cosh(sqrt(x)) )/ (dx*dx);
#### printf("%.2f \t %.2f \t %.2f \t %.2f \t %.2f \t %.2f \n",x,fx,f1x_a,f1x_f,f2x_a,f2x_f);
#### //printf("%.2f \t %.2f \t %.2f \t %.2f \n",x,fx,f1x_a,f1x_f);
#### x = x + dx;
#### }
#### return 0;
#### }

#### // [Original code](https://github.com/Devansh-Vashistha/RTR105/blob/main/3LW_derivative/derivative.c)


## Example
![Lab3Example](https://user-images.githubusercontent.com/89969531/150701506-9dc6801d-35ca-47dc-b004-12ad7bc71eaa.jpg)

![Result](https://user-images.githubusercontent.com/89969531/150702037-3ad3d2da-07ef-4b26-892e-a05e7c7186e9.png)
Fig 2

## Description
#### The above C program tries to find the area under the curve of f(x). This area can be found with the three method, Rectangle, Trapezium and Simpson's method. The Formula in Rectangle is length multiplied by width. In Trapezium, The formula of area trapezium has been used. In Simpson’s rule, Parabola shape has been used. The acuracy of Simpson’s is the most and least for rectangle. Fig 1 shows the function as well as the Integrated function.
