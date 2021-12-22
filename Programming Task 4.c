#include <stdio.h>
int main ()
{
  int a, b, c;
  long long d,e;
  a = 1;
  e = 1;
  b = 1;
  printf ("please enter the type of datatype that you are entering \n");
  printf ("please enter 1 for int datatype  \n");
  printf ("please enter 2 for char datatype  \n");
  printf ("please enter 3 for long long datatype  \n");
  scanf ("%d", &c);
  
    if(c==2){
      printf("Sorry The factorial is not possible");
      return 0;
    }
    else if(c==1){
      printf ("please enter the number \n");
      scanf ("%d", &c);
      while(b<=c)
        {
        a=a*b;
        b=b+1;
        }
    printf("The Factorial of %d is : %d",c,a);
    }
    else if(c==3){
      printf ("please enter the number \n");
      scanf ("%lld", &d);
      while(b<=d)
        {
        e=e*b;
        b=b+1;
        }
    printf("The Factorial of %lld is : %lld",d,e);
    }

return 0;
}
