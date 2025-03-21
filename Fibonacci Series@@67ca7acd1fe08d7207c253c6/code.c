#include <stdio.h>
// int fibonacciSeries(int a);
int fibonacciSeries(int a){
    if(a==1 || a==2){
        return a-1;
    }
    return fibonacciSeries(a-1) + fibonacciSeries(a-2);
}
int main(){
    int a;
    scanf("%d", &a);
    if(a<=0){
        printf("Invalid input\n");
        return 1;
    }
    for(int i=1; i<=a; i++){
        printf("%d ", fibonacciSeries(i));
    }
    
    return 0;
}