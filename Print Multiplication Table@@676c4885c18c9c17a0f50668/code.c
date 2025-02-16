#include <stdio.h>
int main(){
    int a, n;
    scanf("%d", &a);
    for(int n=1; n<=10; n++){
        printf("%d x %d = %d\n", a,n,a*n);
    }
    return 0;
}