/*
+---------------------------------------------------------------------------------------+
| By:- Devansh Vashistha (211AEB007)  _____                                             |
| Variant number:- 26         :  cosh(./  x  )                                          |
+---------------------------------------------------------------------------------------+
*/

#include<stdio.h>
#include<math.h>
int main(){
long double x ,y , a,s;
int k=0,b;
printf("Cos hyperbolic of square root arguemnet \n \n");
printf("Give the Arguement:  x = ");
scanf("%Lf",&x);
printf("                             ___  \n");
printf("Given Function:       Cosh \\/ x   \n \n \n");
y = cosh(sqrt(x));
printf("(From inbuilt function) \n");
printf("        _____   \n");
printf("cosh  \\/%.2Lf   = %.2Lf \n \n \n" ,x,y) ;

a = pow(x,k);
s = a;
printf("a%d = %Lf       |at k = %d, Result = %Lf \n",k,a,k,s);
k++;
while(k!=501){
    b = 2*k;
    a = (x*a)/(b*(b-1));
    s = s + a;
    if ((k==499)||(k==500)){
        printf("a%d = %Lf   |at k = %d, Result = %Lf \n",k,a,k,s) ;
        }
    k++;
}
printf("\n \n \n (From Calculation) \n");
printf("        _____   \n");
printf("cosh  \\/%.2Lf   = %.2Lf \n \n \n" ,x,s) ;

printf("                            500 \n");
printf("                         ___________ \n");
printf("                         \\                        k\n ");
printf("       __________        \\                    (x)  \n");
printf("cosh  \\/ %Lf   =      >              ------------ \n",x) ;
printf("                          /                    (2.k)!  \n");
printf("                         / \n");
printf("                        ------------ \n");
printf("                             k = 0 \n \n");
printf("                             x \n");
printf("Re-occerence term =  ---------------- \n");
printf("                      [2.k] [(2k)-1] \n");
return 0;
}
