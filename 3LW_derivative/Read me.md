# Laboratory work Nr. 3
# Derivative


## Content
- [x] 1. [Expression with plotting](https://github.com/Devansh-Vashistha/RTR105/blob/main/3LW_derivative/Read%20me.md#expression-with-plotting)
- [x] 2. [Code](https://github.com/Devansh-Vashistha/RTR105/blob/main/3LW_derivative/Read%20me.md#code)
- [x] 3. [Example](https://github.com/Devansh-Vashistha/RTR105/blob/main/3LW_derivative/Read%20me.md#example)
- [x] 4. [Description](https://github.com/Devansh-Vashistha/RTR105/blob/main/3LW_derivative/Read%20me.md#description)


## Expression with plotting
![equation](https://user-images.githubusercontent.com/89969531/150701443-360b8a67-a659-4648-a15d-b48749e31803.svg)
![equation (1)](https://user-images.githubusercontent.com/89969531/150701464-5070a60c-ed7d-480a-bf50-279e750a3543.svg)
![equation (2)](https://user-images.githubusercontent.com/89969531/150701481-d7de2416-8661-45c8-9b2b-875dc474175c.svg)


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
#### The above C program tried to Show that implement the knowledge of first principle of derivative. The first and second derivative are found from the calculation or Chain rule and also by the first principle of Derivative. The Figure 1 shows the function with the derivatives from the chain rule of derivatives. The Fig 2 shows a demo of the code's output. The presicion of the function, determines the sharpned of the figure.
