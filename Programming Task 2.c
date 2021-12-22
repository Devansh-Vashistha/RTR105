#include <stdio.h>
void main()
{
    int a,b,c;
    printf("please enter 1 number \n");
    scanf("%d",&c);
    printf("\n \n");
    b = 7;
    a = c>>b;
    printf("%d",a);
    
    
    a = ((c>>(b-1))<<(b-1)) - ((c>>b)<<b);
    a = a>>(b-1);
    b = b-1;
    printf("%d",a);
    
    a = ((c>>(b-1))<<(b-1)) - ((c>>b)<<b);
    a = a>>(b-1);
    b = b-1;
    printf("%d",a);
    
    a = ((c>>(b-1))<<(b-1)) - ((c>>b)<<b);
    a = a>>(b-1);
    b = b-1;
    printf("%d  ",a);
    
    a = ((c>>(b-1))<<(b-1)) - ((c>>b)<<b);
    a = a>>(b-1);
    b = b-1;
    printf("%d",a);
    
    a = ((c>>(b-1))<<(b-1)) - ((c>>b)<<b);
    a = a>>(b-1);
    b = b-1;
    printf("%d",a);
    
    a = ((c>>(b-1))<<(b-1)) - ((c>>b)<<b);
    a = a>>(b-1);
    b = b-1;
    printf("%d",a);
    
    a = ((c>>(b-1))<<(b-1)) - ((c>>b)<<b);
    a = a>>(b-1);
    b = b-1;
    printf("%d",a);
    
    return 0;
}
