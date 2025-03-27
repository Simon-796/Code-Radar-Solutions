#include <stdio.h>
// int fibonacciSeries(int a);
int fibonacciSeries(int a){
    if(a==1 || a==2){
        return a-1;
    }
    return fibonacciSeries(a-1) + fibonacciSeries(a-2);
}
