# Laboratory work Nr. 1
# Taylor series


## Content
- [x] 1. [Expression with plotting](https://github.com/Devansh-Vashistha/RTR105/blob/main/The%20Lab%201/LAB%201%20Report.md#expression-with-plotting)
- [x] 2. [Code](https://github.com/Devansh-Vashistha/RTR105/blob/main/The%20Lab%201/LAB%201%20Report.md#code)
- [x] 3. [Reoccurence Factor](https://github.com/Devansh-Vashistha/RTR105/blob/main/The%20Lab%201/LAB%201%20Report.md#reoccurence-factor)
- [x] 4. [Example](https://github.com/Devansh-Vashistha/RTR105/blob/main/The%20Lab%201/LAB%201%20Report.md#example)
- [x] 5. [Results of Example by GNU Plot](https://github.com/Devansh-Vashistha/RTR105/blob/main/The%20Lab%201/LAB%201%20Report.md#results-of-the-example)


## Expression with plotting
![CodeCogsEqn](https://user-images.githubusercontent.com/89969531/150640846-43b6c909-44e0-424e-9468-56c2401d0c7f.svg)



## Code

#### /*
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
[Original code](https://github.com/Devansh-Vashistha/RTR105/blob/main/The%20Lab%201/The%20Lab%201%20code.c)
## Reoccurence Factor
![CodeCogsEqn (1)](https://user-images.githubusercontent.com/89969531/150641298-9ec557cc-012d-49d5-b819-f97d23666a4e.svg)


## Example
![image](https://user-images.githubusercontent.com/89969531/150641285-31e3d0ff-5055-49ec-b56a-9a29a47ad9f0.png)


## Results of the Example
