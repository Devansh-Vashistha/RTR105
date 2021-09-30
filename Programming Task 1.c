#include <stdio.h>

int main(void) {
  long long a,b,c; 
  printf("Enter an integer: "); 
  scanf("%lld",&a);
  printf("Enter another integer: "); 
  scanf("%lld",&b);
  c = a*b; 
  printf("Number = %lld \n",c);
  return 0;
}
