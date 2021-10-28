#include <stdio.h>
int main()
{
    printf("use a() ab() abc(_) abcd(_) functions \n")
    void a(void){
        printf("Void given, Void Returned \n");
    }
    
    int ab(void){
        printf("Void given, something Returned \n");
        return 1;
    }
    void abc(int x){
        printf("something given, void Returned \n");
    }
    int abcd(int x){
        printf("something given, Something Returned \n");
        return 1;
    }
    return 0;
}
