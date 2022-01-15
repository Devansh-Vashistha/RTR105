#include <stdio.h>
#include <math.h>
double f(double x, double d){
  return (cosh(sqrt(x))) - d;
}
int main(void) {
double x,a,b,c;
  printf("Kindly Enter the value, which you would like to check in function \n (try to enter value more than 1) \n");
  scanf("%lf",&c);
  printf("Kindly Enter the range \n \n");
  printf("Kindly Enter starting of the range \n");
  scanf("%lf",&a);
  printf("Kindly Enter ending of the range \n");
  scanf("%lf",&b);
  x = (a+b)/2;
  while(((b-a)>0.00001)||((a-b)>0.00001)){

    if (((f(a,c))*(f(b,c)))>0) { // First case, if root can't be found due to it's absense or prensence of even roots!
      printf("The value might not be present \n or \n Even number of roots are present between the entered ranges!");
      return 0;
      break;
    }

    else if (((f(a,c))*(f(b,c)))<0){ // If root odd root is present overall
      if (((f(x,c))*(f(b,c)))<0){a = x;}  // looking right side
      else {b = x;} // looking left side
    }

    //////////////////////////////////////////////////////////////////////// Miracle
    else if(((f(a,c))*(f(b,c)))==0){
      if ((f(a,c))==0){
        printf("The root has been found at %lf",a);
        return 0;
      }
    else if ((f(b,c))==0){
      printf("The root has been found at %lf",b);
      return 0;
    }
    }
    //////////////////////////////////////////////////////////////////////// Miracle

  x = (a+b)/2;
  }
printf("Root is present between %f and %f",a,b);
  return 0;
}
