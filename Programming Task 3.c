#include <stdio.h>
int main()
{
    char a,b,c;
    int d;
    printf("please enter 3 inputs as follows, only one symbol please \n");
    printf("please enter 1st input \n");
    scanf("%c",&a);
    printf("please enter 2nd input \n");
    scanf(" %c",&b);
    printf("please enter 3rd input \n");
    scanf(" %c",&c);
    printf("\n \n");
    printf("Kindly enter your choice \n");
    printf("Enter 1 for Ascending order\n");
    printf("Enter 2 for Descending order\n");
    scanf("%d",&d);
    
    if (d==2){
        if (a>=b && a>=c){ //A is Largest
            if(b>=c){
            printf("%c %c %c",a,b,c);
            }
            if(c>=b){
            printf("%c %c %c",a,c,b);
            }
        }
        if (b>=a && b>=c){ //B is Largest
            if(a>=c){
            printf("%c %c %c",b,a,c);
            }
            if(c>=a){
            printf("%c %c %c",b,c,a);
            }
        }
        if (c>=a && c>=b){ //C is Largest
            if(a>=b){
            printf("%c %c %c",c,a,b);
            }
            if(b>=a){
            printf("%c %c %c",c,b,a);
            }
        }
    }
    
    else
    if (d==1){
        if (a<=b && a<=c){ //A is Smallest
            if(b<=c){
            printf("%c %c %c",a,b,c);
            }
            if(c<=b){
            printf("%c %c %c",a,c,b);
            }
        }
        if (b<=a && b<=c){ //B is Smallest
            if(a<=c){
            printf("%c %c %c",b,a,c);
            }
            if(c<=a){
            printf("%c %c %c",b,c,a);
            }
        }
        if (c<=a && c<=b){ //C is Smallest
            if(a<=b){
            printf("%c %c %c",c,a,b);
            }
            if(b<=a){
            printf("%c %c %c",c,b,a);
            }
        }
    }
    else{
        printf("Incorrect choice!!!!!!!!!!!!!!!!!");
    }
    return 0;
}
