#include <stdio.h>
int main(){
    int n;
    int space =1;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int k=1; k<=n-1; k++){
            printf(" ");
        }
        for(int j=1; j<=space; j++){
            printf("%d", j);
        }
        space = space +2;
        printf("\n");
    }
    return 0;
}