# Laboratory work Nr. 1
# Taylor series


## Content
- [x] 1. [Expression with plotting](https://github.com/Devansh-Vashistha/RTR105/blob/main/The%20Lab%201/Read%20me.md#expression-with-plotting)
- [x] 2. [Code](https://github.com/Devansh-Vashistha/RTR105/blob/main/The%20Lab%201/Read%20me.md#code)
- [x] 3. [Reoccurence Factor](https://github.com/Devansh-Vashistha/RTR105/blob/main/The%20Lab%201/Read%20me.md#reoccurence-factor)
- [x] 4. [Example](https://github.com/Devansh-Vashistha/RTR105/blob/main/The%20Lab%201/Read%20me.md#example)
- [x] 5. [Description](https://github.com/Devansh-Vashistha/RTR105/blob/main/The%20Lab%201/Read%20me.md#description)


## Expression with plotting
![CodeCogsEqn](https://user-images.githubusercontent.com/89969531/150640846-43b6c909-44e0-424e-9468-56c2401d0c7f.svg)

![Lab1Photo](https://user-images.githubusercontent.com/89969531/150655943-59e83d37-7a77-49e4-b87b-b3693e3e2d02.png)
                                                        Fig 1
![Lab 1](https://user-images.githubusercontent.com/89969531/150655947-721e5ddd-73aa-437f-9211-1177a65327cc.png)
                                                        Fig 2
![Lab 1 magnified](https://user-images.githubusercontent.com/89969531/150655948-036273d3-90ce-4086-ad50-31e1011f3491.png)
                                                        Fig 3

## Code

 /*
#### +---------------------------------------------------------------------------------------+
####                              By:- Devansh Vashistha (211AEB007)                                                  
####                                    Variant number:- 26                                                                 
#### +---------------------------------------------------------------------------------------+
#### */
####
#### #include<stdio.h>
#### #include<math.h>
#### int main(){
#### long double x ,y , a,s;
#### int k=0,b;
#### printf("Cos hyperbolic of square root arguemnet \n \n");
#### printf("Give the Arguement:  x = ");
#### scanf("%Lf",&x);
#### printf("                             ___  \n");
#### printf("Given Function:       Cosh \\/ x   \n \n \n");
#### y = cosh(sqrt(x));
#### printf("(From inbuilt function) \n");
#### printf("        _____   \n");
#### printf("cosh  \\/%.2Lf   = %.2Lf \n \n \n" ,x,y) ;
#### 
#### a = pow(x,k);
#### s = a;
#### printf("a%d = %Lf       |at k = %d, Result = %Lf \n",k,a,k,s);
#### k++;
#### while(k!=501){
####     b = 2*k;
####     a = (x*a)/(b*(b-1));
####     s = s + a;
####     if ((k==499)||(k==500)){
####         printf("a%d = %Lf   |at k = %d, Result = %Lf \n",k,a,k,s) ;
####         }
####     k++;
#### }
#### printf("\n \n \n (From Calculation) \n");
#### printf("        _____   \n");
#### printf("cosh  \\/%.2Lf   = %.2Lf \n \n \n" ,x,s) ;
#### 
#### printf("                            500 \n");
#### printf("                         ___________ \n");
#### printf("                         \\                        k\n ");
#### printf("       __________        \\                    (x)  \n");
#### printf("cosh  \\/ %Lf   =      >              ------------ \n",x) ;
#### printf("                          /                    (2.k)!  \n");
#### printf("                         / \n");
#### printf("                        ------------ \n");
#### printf("                             k = 0 \n \n");
#### printf("                             x \n");
#### printf("Re-occerence term =  ---------------- \n");
#### printf("                      [2.k] [(2k)-1] \n");
#### return 0;
#### }
#### // [Original code](https://github.com/Devansh-Vashistha/RTR105/blob/main/The%20Lab%201/The%20Lab%201%20code.c)


## Reoccurence Factor
![CodeCogsEqn (1)](https://user-images.githubusercontent.com/89969531/150641298-9ec557cc-012d-49d5-b819-f97d23666a4e.svg)


## Example
![image](https://user-images.githubusercontent.com/89969531/150641285-31e3d0ff-5055-49ec-b56a-9a29a47ad9f0.png)


## Description
#### The above C language program code tried to provide the basic understanding of the function's Taylor's Series. The function can be computed with help of the Taylor's series. To make calculation easy, common Re-occurance factor was calculate by dividing the next term by previous term, due to which we are can find next term by multipying the previous term with the common re-occurence term. The code starts it's processing as soon as the input is asked from the user. The Summition is done from k=0 to k = 500 with the help of While loop and common Re-occurence factor. The Sum value (s) keeps get updated, till variable 'k' reaches to value of k=500. Then final value is stored in variable 's' and is shown as the result. First figure, Fig 1 shows the graphing of original function as 'f(x)', and first three terms as a0, a1 and a2. Second figure, Fig 2 shows the original function as cosh(sqrt(x)) and f(x) as function of sum of first three terms. The third Figure, Fig 3 is magnified view of second firgure (Fig 2) where they are intersecting. In Example, a result of x = 2.05 has been shown.
