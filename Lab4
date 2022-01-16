#include <stdio.h>
#include <math.h>
int main(void) {  
  double x,a,b,dx,h,i1=0.,i2,F,s=0;
  int k,n=2;
  
  printf("Kindly Enter the range \n \n");
  printf("Kindly Enter starting of the range \n");
  scanf("%lf",&a);
  printf("Kindly Enter ending of the range \n");
  scanf("%lf",&b);
  printf("Kindly Enter the value, for precision  \n");
  scanf("%lf",&dx);

  F = (2*(sqrt(b))*(sinh(sqrt(b)))) - (2*cosh(sqrt(b))) - (2*(sqrt(a))*(sinh(sqrt(a)))) + (2*cosh(sqrt(a)));
  ////////////////////RECTANGLE////////////////////
  i2 = (b-a)/2 * (cosh(sqrt(a))+cosh(sqrt(b)));
  while(fabs(i2-i1)>dx || n==2){
    n = n*2;
    h = fabs(b-a)/n;
    i1 = i2;
    i2 = 0;
    for(k=0;k<n;k++){
      i2 = i2 + h*cosh(sqrt(a+(k+0.5)*h));
    }
  }
  printf("By analytical formula: %.3f \n",F);
  printf("Value of integral: %.3f (rectangle taken: %d) \n",i2,n);
  ////////////////////RECTANGLE////////////////////

  ////////////////////Trap////////////////////
  i2 = (b-a)/2 * (cosh(sqrt(a))+cosh(sqrt(b)));
  i1 = 0.;
  n = 2;
  //dx = dx/10;
  while(fabs(i2-i1)>=dx || n==2){
  n = n*2;
  h=fabs(b-a)/n;
  i1 = i2;
  i2 = 0;
  for(k=0;k<n;k++){
    i2 = ( (h/2)*( cosh(sqrt(a + (k*h))) + cosh(sqrt(a + ((k+1)*h)))) ) + i2;
  }
  }
  printf("Value of integral: %.3f (trapezium taken: %d) \n",i2,n);
  ////////////////////Trap////////////////////

  ////////////////////Simpson////////////////////
  i2 = cosh(sqrt(a)) + cosh(sqrt(b));
  h = fabs(b-a)/2;
  n = 2;
  i1 = 0;
  while(fabs(i2-i1)>dx || n==2){
    n = n*2;
    s = 0;
    h = fabs(b-a)/n;
    i1 = i2;
    i2 = 0;
    for(k=1;k<n;k++){
    if(k%2==0){
      s = s + 2*cosh(sqrt(a + (k*h)));
    }
    else{
      s = s + 4*cosh(sqrt(a + (k*h)));
    }
  }
   i2 = (h/3)*( cosh(sqrt(a)) + cosh(sqrt(b)) + s);
  }
printf("Value of integral: %.3f (parabolas taken: %d) \n",i2,n);
////////////////////Simpson////////////////////

return 0;
}
