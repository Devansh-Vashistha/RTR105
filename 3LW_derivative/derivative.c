#include <stdio.h>
#include <math.h>
int main(void) {
  double x,a,b,dx,fx,f1x_a,f1x_f,f2x_a,f2x_f;
  printf("Kindly Enter the range \n \n");
  printf("Kindly Enter starting of the range \n");
  scanf("%lf",&a);
  printf("Kindly Enter ending of the range \n");
  scanf("%lf",&b);
  printf("Kindly Enter the value, for precision  \n");
  scanf("%lf",&dx);
  printf("x       f(x)    f'(x)   my_f'(x)  f''(x)  my_f''(x) \n");
  x=a;
  while(x<b){
    fx = cosh(sqrt(x));
    f1x_a = (sinh(sqrt(x)))/(2*sqrt(x));
    f1x_f = ( cosh(sqrt(x+dx)) - cosh(sqrt(x)) ) / dx;


    f2x_a =  ( cosh(sqrt(x)) - (sinh(sqrt(x)) / sqrt(x)) ) / (4*x);


    f2x_f = ( cosh(sqrt(x+dx+dx)) - (2*cosh(sqrt(x+dx))) + cosh(sqrt(x)) )/ (dx*dx);
    
    printf("%.2f \t %.2f \t %.2f \t %.2f \t %.2f \t %.2f \n",x,fx,f1x_a,f1x_f,f2x_a,f2x_f);
    //printf("%.2f \t %.2f \t %.2f \t %.2f \n",x,fx,f1x_a,f1x_f);
    x = x + dx;
  }
  return 0;
}
