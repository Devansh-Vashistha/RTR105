#include <stdio.h>
int main ()
{
  int a, b, c, d;
  char a0, b0, c0, d0;
  long long a1, b1, c1, d1;
  b = 1;
  c = 1;
  d = 1;
  b0 = 1;
  c0 = 1;
  d0 = 1;
  b1 = 1;
  c1 = 1;
  d1 = 1;
  
  printf ("please enter the type of datatype that you are entering \n");
  printf ("please enter 1 for int datatype  \n");
  printf ("please enter 2 for char datatype  \n");
  printf ("please enter 3 for long long datatype  \n");
  scanf ("%d", &a);
  
  
    if(a==1){
      printf ("please enter the number \n");
      scanf ("%d", &a);
      while(b<=a)
        {
        c=c*b;
        b=b+1;
        }
      b=1;
      while(b<=(a-1))
        {
        d=d*b;
        b=b+1;
        }
      if(c/d == a){
        printf("The Factorial of %d is : %d",a,c);
      }
      else{
          printf("The Factorial is not possible");
      }
        
    
    }
    else if(a==2){
      printf ("please enter the number \n");
      scanf ("%hhd", &a0);
      while(b0<=a0)
        {
        c0=c0*b0;
        b0=b0+1;
        }
      b0=1;
      while(b0<=(a0-1))
        {
        d0=d0*b0;
        b0=b0+1;
        }
      if(c0/d0 == a0){
        printf("The Factorial of %hhd is : %hhd",a0,c0);
      }
      else{
          printf("The Factorial is not possible");
      }
    }
    else if(a==3){
      printf ("please enter the number \n");
      scanf ("%lld", &a1);
      while(b1<=a1)
        {
        c1=c1*b1;
        b1=b1+1;
        }
    printf("The Factorial of %lld is : %lld",a1,c1);
    }
    else{
      printf("Sorry The factorial is not possible");
      return 0;
    }
return 0;
}
