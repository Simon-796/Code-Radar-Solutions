#include <stdio.h>
int fibo(int a);
int fibo(int a){
    if(a==1 || a==2){
        return a-1;
    }
    return fibo(a-1)+fibo(a-2);
}
int main(){
    int a;
    scanf("%d", &a);
    if(a<=0){
        printf("Invalid input\n");
    }
    int f = fibo(a);
    printf("%d", f);
    return 0;
}