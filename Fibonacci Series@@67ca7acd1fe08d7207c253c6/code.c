#include <stdio.h>
int fibonacciSeries(int a){
    int t1 =0, t2 = 1, nextterm;
    printf("");
    for(int i = 1; i<= n; i++){
        printf("%d ", t1);
        nextterm = t1 + t2;
        t1 = t2;
        t2 = nextterm;

    }
    printf("\n");
}
