#include <stdio.h>

int main(void) {
  long long a,b,c; 
  printf("Enter an integer: \n"); 
  scanf("%lld",&a);
  printf("Enter another integer: \n"); 
  scanf("%lld",&b);
  c = a*b; 
  printf("\n Number = %lld \n",c);
  return 0;
}
